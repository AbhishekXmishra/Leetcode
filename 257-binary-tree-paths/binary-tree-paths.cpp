class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        insertPaths(root, "", &result);
        return result;
    }
private:
	// simple recursive pre-order traversal
    void insertPaths(TreeNode* node, string str, vector<string>* res) {
        if (!node) return;  // base-case
        
        str += to_string(node->val);
        if (!node->left && !node->right) {
			// if the current node is a leaf, add string to result
            res->emplace_back(str);
        }
        
        insertPaths(node->left, str + "->", res);
        insertPaths(node->right, str + "->", res);
    }
};