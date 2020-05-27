/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* createTree(vector<int> temp, int l, int r)
    {
        if(l>r)
         return NULL;
        int mid=(l+r)/2;
        TreeNode* root=new TreeNode(temp[mid]);
        root->left=createTree(temp,l,mid-1);
        root->right=createTree(temp,mid+1,r);
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int>temp;
        ListNode* t=head;
        while(t!=NULL) 
        {temp.push_back(t->val);
         t=t->next;
        }
        return createTree(temp,0,temp.size()-1);
    }
};
