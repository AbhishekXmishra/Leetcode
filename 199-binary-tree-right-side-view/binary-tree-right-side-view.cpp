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
    void printLeftView(TreeNode* root, int level, vector<int>& leftView) {
  if(root == NULL) 
	return ;

  if(level == leftView.size()) {
	//iska matlab left view ki node milgyi h , store karlo
	leftView.push_back(root-> val);
  }
  printLeftView(root->right, level+1, leftView);
  printLeftView(root->left, level+1, leftView);
}

    vector<int> rightSideView(TreeNode* root) {
         vector<int> leftView;
         printLeftView(root ,0, leftView);
         return leftView;
    }
};