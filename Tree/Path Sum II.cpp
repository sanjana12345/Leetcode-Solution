/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int> > ans;
    vector<int> res;
    void solve(TreeNode* root,int sum)
    {
        if(root==NULL)
            return;
        sum=sum-root->val;
        res.push_back(root->val);
        if(sum==0 && root->left==NULL && root->right==NULL)
        {
            
            ans.push_back(res);
        }
        solve(root->left,sum);
        solve(root->right,sum);
        sum=sum+root->val;
        res.pop_back();

    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        solve(root,sum);
        return ans;
    }
};
