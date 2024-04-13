class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        map <int , int > mpp ;
        mpp[0] = 1;
        int sum = 0;
        int cnt = 0 ;
        for(int i = 0 ; i< nums.size() ; i++){
          sum += nums[i] % 2 ;
          int remove = sum - k ;
          cnt += mpp[remove];
          mpp[sum] += 1 ;

        }
      return cnt ;
    }
};