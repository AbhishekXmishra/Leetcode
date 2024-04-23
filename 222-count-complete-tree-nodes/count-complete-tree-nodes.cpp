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
 int cnt = 0 ;
    void count(TreeNode* root ){
        
       if (root != NULL){
          cnt++;
       }     
          if(root -> left != NULL ){
           count(root -> left);
          }
          if(root -> right != NULL ){
            count(root -> right);
           }    
    }
    int countNodes(TreeNode* root) {
     
      if(root == NULL){
        return 0;
      }
    count(root);
    return cnt;
        
    }
};