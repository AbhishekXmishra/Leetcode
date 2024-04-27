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
    void flattenTree(TreeNode* &root, TreeNode* &prev){
        if(root==NULL){
            return;
        }
        flattenTree(root->right,prev);
        flattenTree(root->left,prev);
        root->left=NULL;
        root->right=prev;
        prev=root;
    }
public:

    void flatten(TreeNode* root) {
        if(root== NULL) {
            return;
        }
        TreeNode* prev=NULL;
        flattenTree(root,prev);
        return  ;  
    }
};