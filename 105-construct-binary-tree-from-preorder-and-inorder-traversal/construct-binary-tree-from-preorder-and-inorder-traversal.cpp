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
/* class Solution {
public:
   void createmapping(vector<int>& inorder , int& size , map<int , int > mpp){
    for(int i = 0 ; i < size ; i++){
       mpp[inorder[i]] = i;
    }
   }

    TreeNode* solve(map<int , int > & mpp ,vector<int> &preorder, vector<int>& inorder , int & preorderindex, int inorderstart , int inorderend , int size ){
        if(preorderindex >= size || inorderstart > inorderend){
          return NULL ;
        }

        int element = preorder[preorderindex++];
        TreeNode* root = new TreeNode(element);
       

        int position = mpp[element];

        root -> left = solve(mpp , preorder , inorder ,preorderindex , inorderstart , position-1 , size);

        root -> right = solve(mpp , preorder , inorder ,preorderindex , position+1 , inorderend , size);
        
       return root ; 

    }



    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preorderindex = 0 ;
        int size  = preorder.size();
        int inorderstart = 0;
        int inorderend = size -1 ;
        map<int , int > mpp;
        createmapping(inorder , size , mpp );
        TreeNode* root = solve(mpp , preorder , inorder ,preorderindex , inorderstart , inorderend , size );
        return root ;
    }
};

*/

class Solution {
public:
    unordered_map<int,int>mapping;
    void createMapping(unordered_map<int,int> &mapping,vector<int>&inorder,int n) {
        for(int i=0; i<n; i++) {
                mapping[inorder[i]] = i;
        }
}
    TreeNode* BuildTree(vector<int>& preorder,vector<int>& inorder,int size,int &preIndex,int inOrderStart,int inOrderEnd){
        //base case
        if(preIndex >= size || inOrderStart > inOrderEnd) {
                return NULL;
        }

        //Step A:
        int element = preorder[preIndex++];
        TreeNode* root = new TreeNode(element);

        // int pos = findPosition(inorder, size, element);
        int pos = mapping[element];

        //step B: root->left solve
        root->left = BuildTree(preorder,inorder, size, preIndex, inOrderStart, pos-1);
        //Step C: root->right solve
        root->right = BuildTree( preorder, inorder, size, preIndex, pos+1, inOrderEnd);

        return root;  
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int size = preorder.size();
        int preIndex = 0;
        int inOrderStart = 0;
        int inOrderEnd = size-1;
        createMapping(mapping,inorder,size);
        return BuildTree(preorder,inorder,size,preIndex,inOrderStart,inOrderEnd);
    }
};