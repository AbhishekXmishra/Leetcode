class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n = nums.size() ;
        int sum = 0 ;
        for(int &num : nums){
          sum = (sum + num) % p ;
        }

        int target = sum % p ;

        if(target == 0 ){
          return 0 ;
        }

        unordered_map<int , int> mpp ;

        int curr = 0 ;

        mpp[0] = -1 ;
        
        int res = n ;

        for(int j = 0 ; j < n ; j++){
            curr = (curr + nums[j]) % p ;

            int remain = (curr - target + p ) % p ;

            if(mpp.find(remain) != mpp.end()){
              res = min(res , j - mpp[remain]);
            }

            mpp[curr] = j ;
        }
        
       if(res == n ){
        return -1 ;
       } 
       else {
        return res ;
       }
    }
};