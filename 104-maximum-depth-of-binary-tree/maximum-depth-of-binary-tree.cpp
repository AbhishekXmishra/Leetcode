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
    int maxDepth(TreeNode* root) {

// IMP Galti
if(root==NULL)
	return 0;

queue<TreeNode*> q;
q.push(root);
q.push(NULL);
int count = 1;

//asli traversal start krete h 

while(!q.empty()) {
	TreeNode* front = q.front();
	q.pop();

	if(front == NULL) {
		cout << endl;
		if(!q.empty()) {
			count++;
			q.push(NULL);
		}
	}
	else {
		//valid node wala case
		//cout << front->data << " ";

		if(front->left != NULL) {
			q.push(front->left);
		}
		if(front->right != NULL) {
			q.push(front->right);
		}
	}
}
return count;
    }
};