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
    TreeNode* deleteNode(TreeNode* root, int val) {
        if(root == NULL){
          return root ;
        }
      if(val < root -> val){
        root -> left = deleteNode(root -> left , val);
      }
      else if(val > root -> val){
        root -> right = deleteNode(root -> right , val);
      }
      else {
        if(root -> left == NULL && root -> right == NULL ){
           delete(root);
           return NULL ;
        }
      
      if (!root->left || !root->right) {
                TreeNode *ret = root->left ? root->left : root->right;
                delete(root);
                return ret;
            }

       if(root -> left && root -> right){
        TreeNode* temp = root -> right ; 
        while(temp -> left){
          temp = temp -> left ;
        }
      root -> val = temp -> val ;
       
       root -> right = deleteNode(root -> right , temp -> val); 
        }
      }
    return root ;
    }
};