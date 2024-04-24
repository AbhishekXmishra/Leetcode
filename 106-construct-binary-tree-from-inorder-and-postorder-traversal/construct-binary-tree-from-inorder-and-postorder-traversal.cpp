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
    void createMapping(map<int,int>& valueToIndex, vector<int>& inorder,int size){
        for(int i=0; i<size; i++){
            int element = inorder[i];
            int index = i;

            valueToIndex[element] = i;
        }
    }
    TreeNode* solve(map<int,int>& valueToIndex, vector<int>& inorder, vector<int>& postorder, int size, int& postorderIndex, int inorderStart, int inorderEnd){
        //base case...
        if(postorderIndex < 0  || inorderStart > inorderEnd){
            return NULL;
        }
        //1case solve kardo..
        int element = postorder[postorderIndex];
        postorderIndex--;
        //node create kar do...
        TreeNode* root = new TreeNode(element);
        //search for element in inorder
        int position = valueToIndex[element];

        //deploy recursion here...

        root->right = solve(valueToIndex, inorder, postorder, size, postorderIndex, position+1, inorderEnd);
        root->left = solve(valueToIndex, inorder, postorder, size, postorderIndex, inorderStart, position-1);


        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int size = postorder.size();
        int postorderIndex = size-1;
        int inorderStart = 0;
        int inorderEnd = inorder.size()-1;
        map<int,int> valueToIndex;
        createMapping(valueToIndex, inorder, size);
        return solve(valueToIndex, inorder, postorder, size, postorderIndex, inorderStart, inorderEnd);
    }
};