class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int l = 0 ;
        int r = 0;
        int n = nums.size();
        int cnt = 0 ;
        int maxlen = 0;
        while(r < n){
          if(nums[r] == 1){
            cnt++  ; 
            if(cnt > maxlen){
              maxlen = cnt ;
            }
          }
          else {
            cnt = 0 ;
            }
            r++ ;
          }
            
        
        return maxlen ; 
    }
};