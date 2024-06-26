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

   int left(TreeNode* node){
    int cnt = 0;
    while(node){
      cnt ++ ;
      node = node -> left ;
    }
    return cnt; 
   }

    int right(TreeNode* node){
    int cnt = 0;
    while(node){
      cnt ++ ;
      node = node -> right ;
    }
    return cnt; 
   }

    int countNodes(TreeNode* root) {
        if(root == NULL){
          return 0;
        }

        int lh = left(root);
        int rh = right(root);
        if(lh == rh){
          return pow(2 , lh) -1;
        }

       return 1 + countNodes(root->left) + countNodes(root->right);
    
    }
};