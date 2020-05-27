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
 vector<int> postorderTraversal(TreeNode* root) { 
      vector<int>sol; 
      solve(sol,root);  
      return sol;
  } 
void solve(vector<int>&sol,TreeNode*root){
  if(root==NULL) 
    return ; 
      
  solve(sol,root->left); 
  solve(sol,root->right); 
  sol.push_back(root->val);  
} 
};
