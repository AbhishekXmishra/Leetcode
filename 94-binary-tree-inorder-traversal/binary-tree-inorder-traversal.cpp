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
    void solve(TreeNode* root ,vector<int>& Nodes){
      if(root == NULL){
        return ;
      }
      solve(root -> left , Nodes);
      Nodes.push_back(root -> val);
      solve(root -> right , Nodes);

    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> Nodes;
        solve(root , Nodes);
        return Nodes;
    }
};