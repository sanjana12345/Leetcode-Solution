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
    int rob(TreeNode* root) {
        if (!root) {
            return 0;
        }
         
        if (!root->left && !root->right  ) {
            return root->val;
        }
        int left_max = 0;
        int right_max = 0;
         
        if (root->left) {
            left_max = rob(root->left->left) + rob(root->left->right);
        }
         
        if (root->right ) {
            right_max = rob(root->right->left) + rob(root->right->right);
        }

        int max_Root = root->val + left_max + right_max;
        left_max = rob(root->left);
        right_max = rob(root->right);
         
        int maxNoRoot = left_max + right_max;
         
        return max(max_Root, maxNoRoot);
    }
};
