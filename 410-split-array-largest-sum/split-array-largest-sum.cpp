class Solution {
public:
    int solve(vector<int> & nums , int mid  ){
        int partition = 1 ;
        long long subarraySum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
                if(subarraySum + nums[i] <= mid){
                    subarraySum += nums[i];
                }
                else {
                    partition++ ;
                    subarraySum = nums[i];
                }
        }
      return partition ;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin() , nums.end());
        int high = accumulate(nums.begin() , nums.end() , 0);

        while(low <= high){
           int mid = low + (high - low )/2 ;
           int parti = solve(nums , mid );
           if(parti <= k){
            high = mid - 1 ;
           }
           else{
            low = mid + 1 ;
           }
        }
        return low ;
    }
};