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
    bool solve(TreeNode* p , TreeNode* q){
      if(p == NULL && q == NULL){
        return true ;
      }
       else if(p == NULL || q == NULL) //one of them is Not NULL
            return false; 

        else if(p->val!=q->val) 
            return false;  
        return solve(p-> left , q -> right) && solve(p-> right , q -> left);

    }
    bool isSymmetric(TreeNode* root) {
         if(root==NULL) return true; //Tree is empty
        
        return solve(root->left,root->right);
    
    }
};