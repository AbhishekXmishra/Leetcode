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
    void solve(TreeNode*root,vector<string>&ans,string str){
        if(root==NULL){
            return;
        }
        str+=to_string(root->val);
        if(root->left==NULL&&root->right==NULL){
            ans.push_back(str);
            return;
        }
        solve(root->left,ans,str);
        solve(root->right,ans,str);
    }
    int sumNumbers(TreeNode* root) {
        vector<string>ans;
        int nums=0;
        string str=" ";
        solve(root,ans,str);
        for(int i=0;i<ans.size();i++){
            nums+=stoi(ans[i]);
        }
        return nums;
        
    }
};