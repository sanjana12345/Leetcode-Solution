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
    int t = 0, left = 0, right = 0;
    int find(TreeNode* root) {
        if(root == NULL)
            return 0;
        int l = find(root->left);
        int r = find(root->right);
        if(root->val == t) {
            left = l;
            right = r;
        }
        // cout<<l<<" "<<r<<"left<<" "<<right<<endl;
        return l + r + 1;
    }
    bool btreeGameWinningMove(TreeNode* root, int n, int x) {
      t = x;
        find(root);
        return max(max(left, right), n-left-right-1) > n/2;
    }
    
    
};
