class Solution {
public:
    int K ;
    int res ;
    void solve(vector<int>& nums , int index , unordered_map<int , int> &mpp){
        if(index >= nums.size()){
          res++ ;
          return ;
        }

        // not take 
        solve(nums , index+1 , mpp);

       if(!mpp[nums[index] - K] && !mpp[nums[index] + K]) {
                mpp[nums[index]]++;
                solve(nums, index + 1, mpp);
                mpp[nums[index]]--;
        }
    }

    int beautifulSubsets(vector<int>& nums, int k) {
        res = 0 ;
        K = k ;
        unordered_map<int , int> mpp ;
        solve(nums , 0 , mpp);
        return res - 1 ; 
    }
};