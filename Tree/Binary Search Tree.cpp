
 //  struct TreeNode {
 //      int val;
 //     TreeNode *left;
 //     TreeNode *right;
 //      TreeNode() : val(0), left(nullptr), right(nullptr) {}
 //      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 //      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 // };
 
class BSTIterator {
   vector<int> st;
    int size, it;
void inOrder(TreeNode* current) {
        if (current == NULL) {
            return;
        }
        inOrder(current->left);
        st.push_back(current->val);
        inOrder(current->right);
    }    
public:
    BSTIterator(TreeNode* root) {
        inOrder(root); // Fill the ordered array
        size = st.size();
        it = -1;
    }
	
    /** @return the next smallest number */
    int next() {
        return st[++it];
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        return (it < size - 1);
    }
    
    
};
