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
    bool checkTree(TreeNode* root) {
        if(root == NULL){
          return NULL ;
        }

        int sum = 0 ;
        if(root -> left){
          sum += root -> left -> val ;
        }
        if(root -> right){
          sum += root -> right -> val;
        }

        if(sum == root -> val){
          return true; 
        }
        else {
          return false ;
        }
    }
};