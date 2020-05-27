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
class FindElements {
public:
    set<int>nums;
    FindElements(TreeNode* root) {
         if(!root )
             return;
        stack<TreeNode*> my_stack;
        TreeNode* my_root = root;
        my_root->val = 0;
        my_stack.push(my_root);
        while(!my_stack.empty()) {
            TreeNode* cur = my_stack.top();
            nums.insert(cur->val);
            my_stack.pop();
            if(cur->right != nullptr) {
                cur->right->val = 2*cur->val + 2;
                my_stack.push(cur->right);
            }
            if(cur->left != nullptr) {
                cur->left->val = 2*cur->val + 1;
                my_stack.push(cur->left);
            }
        }
        return;
    }
    
    bool find(int target) {
        return nums.count(target) > 0;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */
