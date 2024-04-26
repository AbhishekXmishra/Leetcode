
class Solution {
public:
    void mapping(TreeNode* root, unordered_map<TreeNode*, TreeNode*>& track,
                 TreeNode* target) {
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode* current = q.front();
            q.pop();
            if (current->left) {
                track[current->left] = current;
                q.push(current->left);
            }
            if (current->right) {
                track[current->right] = current;
                q.push(current->right);
            }
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*, TreeNode*> track;
        mapping(root, track, target);
        unordered_map<TreeNode*, bool> visited;
        queue<TreeNode*> q;
        q.push(target);
         visited[target]=true;
         int curr_level = 0;
        while (!q.empty()) {
            int size = q.size();
            if (curr_level ++ == k){
                break;
            } 
            for (int i = 0; i < size; i++) {
               TreeNode* curr = q.front();
               q.pop();
                if (curr->left && !visited[curr->left]) {
                    q.push(curr->left);
                    visited[curr->left] = true;
                }
                if (curr->right && !visited[curr->right]) {
                    q.push(curr->right);
                    visited[curr->right] = true;
                }
                if (track[curr] && !visited[track[curr]]) {
                    q.push(track[curr]);
                    visited[track[curr]] = true;
                }
            }
        }
        
        vector<int> ans ;
        while(!q.empty()){
          TreeNode* curr = q.front();
          q.pop();
          ans.push_back(curr-> val);
        } 
      return ans ;

    }
};