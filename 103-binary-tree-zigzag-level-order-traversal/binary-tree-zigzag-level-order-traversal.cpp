/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        bool leftToRight = true;
        vector<vector<int>> ans;
        if (root == NULL) {
            return ans;
        }
        q.push(root);
        while (!q.empty()) {

            int size = q.size();
            vector<int> row(size);
            for (int i = 0; i < size; i++) {
                TreeNode* front = q.front();
                q.pop();
                int index;
                if (leftToRight) {
                    index = i;
                } else {
                    index = size - 1 - i;
                }
                row[index] = front->val;
                if (front-> left != NULL) {
                    q.push(front-> left);
                }
                if (front-> right != NULL) {
                    q.push(front-> right);
                }
            }
            leftToRight = !leftToRight;
            ans.push_back(row);
        }
        return ans;
    }
};