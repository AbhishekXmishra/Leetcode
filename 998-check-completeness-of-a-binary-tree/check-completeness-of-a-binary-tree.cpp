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
    int countNode(TreeNode* root){
        if(!root) return 0;
        
        int leftCount = countNode(root->left);
        int rightCount = countNode(root->right);
        return 1 + leftCount + rightCount;
    }
    
    bool isCBT(TreeNode* root, int index, int count){
        if(!root) return true;
        
        if(index >= count) return false;
        else{
            bool leftAns = isCBT(root->left, 2*index + 1, count);
            bool rightAns = isCBT(root->right, 2*index + 2, count);
            
            return leftAns && rightAns;
        }
    }
    bool isCompleteTree(TreeNode* root) {
        int count =  countNode(root);
        int index = 0 ;
        if(isCBT(root , index , count)){
          return true; 
        }
        return false ;
    }
};