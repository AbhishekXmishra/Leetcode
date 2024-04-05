class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n = nums.size() ;
        long long leftSum = 0 ;
        long long rightSum = 0 ;
        long long maxi = 0;
        for(int i = 0 ; i <= k-1 ; i++){
          leftSum += nums[i]; 
          maxi = leftSum ;
        }
          int rightIndex = n-1 ;
          for(int i = k-1 ; i >= 0 ; i--){
            leftSum = leftSum - nums[i];
            rightSum += nums[rightIndex];
            rightIndex -- ;
            maxi = max(maxi  , leftSum + rightSum);
          }
    return maxi ;
    }
};