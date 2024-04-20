class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
    queue<TreeNode*> q;
    q.push(root);
    vector<int> vect;
    if(root==NULL) return vect;
    while(!q.empty()){
        int s=q.size();
        for(int i=0;i<s;i++){
            TreeNode* node=q.front();
            q.pop();
            if(i==s-1){
                vect.push_back(node->val);   
            }
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
    }
    return vect;
    }
};