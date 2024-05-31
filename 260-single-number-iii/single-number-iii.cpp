class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int , int> mpp ;
        vector<int> ans ; 
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
          mpp[nums[i]]++;
        }

        for(auto i : mpp){
          if(i.second == 1){
            ans.push_back(i.first);
          }
        }
        return ans ;
    }
};