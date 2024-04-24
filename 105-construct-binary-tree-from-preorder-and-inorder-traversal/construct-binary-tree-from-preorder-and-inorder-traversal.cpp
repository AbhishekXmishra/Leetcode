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
   unordered_map<int , int > mpp;
   void createmapping(vector<int>& inorder , int& size , unordered_map<int , int > &mpp){
    for(int i = 0 ; i < size ; i++){
       mpp[inorder[i]] = i;
    }
   }

    TreeNode* solve(vector<int> &preorder, vector<int>& inorder , int & preorderindex, int inorderstart , int inorderend , int size ){
        if(preorderindex >= size || inorderstart > inorderend){
          return NULL ;
        }

        int element = preorder[preorderindex++];
        TreeNode* root = new TreeNode(element);
       

        int position = mpp[element];

        root -> left = solve( preorder , inorder ,preorderindex , inorderstart , position-1 , size);

        root -> right = solve( preorder , inorder ,preorderindex , position+1 , inorderend , size);
        
       return root ; 

    }



    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preorderindex = 0 ;
        int size  = preorder.size();
        int inorderstart = 0;
        int inorderend = size -1 ;
        createmapping(inorder , size , mpp );
        TreeNode* root = solve( preorder , inorder ,preorderindex , inorderstart , inorderend , size );
        return root ;
    }
};
