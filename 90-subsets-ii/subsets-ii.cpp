class Solution {
    void solve(int ind , vector<int> op , vector<vector<int>>& ans , vector<int>& nums){
         ans.push_back(op);
        for(int i = ind ; i < nums.size() ; i++){
        if(i != ind && nums[i] == nums[i-1]) continue ;
        op.push_back(nums[i]);
        solve(i+ 1 , op , ans , nums);
        op.pop_back();
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> op ;
        sort(nums.begin() , nums.end());
        vector<vector<int>> ans;
        solve(0 , op , ans , nums );
        return ans ;

    }
};