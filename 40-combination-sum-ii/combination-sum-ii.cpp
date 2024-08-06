class Solution {
public:
    void solve(int ind, vector<vector<int>>& ans, vector<int>& op,
               vector<int>& arr, int tar) {

        if (tar == 0) {
            ans.push_back(op);
            return;
        }

        for (int i = ind; i < arr.size(); i++) {
            if (i > ind && arr[i] == arr[i - 1]) {
                continue;
            }

            if (arr[i] > tar) {
                break;
            }

            op.push_back(arr[i]);
            solve(i+1 , ans, op, arr, tar - arr[i]);
            op.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& cand, int target) {
        sort(cand.begin() , cand.end());
        vector<int> op;
        vector<vector<int>> ans;
        solve(0, ans, op, cand, target);
        return ans;
    }
};