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
    void solve(TreeNode* root , vector<int> &ans){
        if(root == NULL){
          return ;
        }

        if((root -> left != NULL) && (root -> left -> left == NULL) && (root -> left -> right == NULL)){
            ans.push_back(root ->left-> val);
        }

        solve(root -> left , ans);
        solve(root -> right , ans);


    }
    int sumOfLeftLeaves(TreeNode* root) {
        vector<int>ans;
         int n  = 0 ;
        solve(root,ans);
        for(int i = 0 ; i < ans.size() ; i++){
           n += ans[i];
        }
        return n ;
    }
};