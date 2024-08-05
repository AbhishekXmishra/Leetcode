class Solution {
public:
    void solve(int ind, vector<vector<int>>& ans, vector<int>& op,
               vector<int>& arr, int tar) {
        if (ind == arr.size()) {
            if (tar == 0) {
                ans.push_back(op);
            }
            return;
        }

        if (arr[ind] <= tar) {
            op.push_back(arr[ind]);
            solve(ind, ans, op, arr, tar - arr[ind]);
            op.pop_back();
        }

        solve(ind + 1, ans, op, arr, tar);
    }

public:
    vector<vector<int>> combinationSum(vector<int>& cand, int target) {
        vector<int> op;
        vector<vector<int>> ans;
        solve(0, ans, op, cand, target);
        return ans;
    }
};