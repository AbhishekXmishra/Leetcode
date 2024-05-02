class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      int cnt = 1 ; 
      int lastsmaller = INT_MIN ;
      int n = nums.size();
      int longest = 1 ;
      if(n == 0 ){
        return 0 ;
      }
        sort(nums.begin() , nums.end());
        for(int i = 0 ; i < nums.size() ; i++ ){
            if(nums[i] - 1 == lastsmaller ){
              cnt++ ;
              lastsmaller = nums[i];
            }
            else if(lastsmaller != nums[i]){
            cnt = 1;
            lastsmaller = nums[i]; 
           }
           longest = max(longest , cnt);
        }
        return longest ;
    }
};