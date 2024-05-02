class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        for(int i = 0 ; i < n ; i++ ){
          for(int j = n-1 ; j >= 0 ; j--){
            if(nums[i] + nums[j] == 0){
              return nums[j];
            }
          }
        }
        return -1 ;
    }
};