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
  vector<TreeNode*> ans;
  unordered_map<string, int> mp;
    string find(TreeNode* root) {
        if (root == NULL) 
            return "";
        
        string str = to_string(root->val);
        str +='L'+ find(root->left);
        str +='R'+  find(root->right);
        if (mp.find(str) != mp.end() && mp[str] == 1) {
            ans.push_back(root);
        }
         mp[str]++;
        return str;
    }
  vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        find(root);
        return ans;
    }
};
