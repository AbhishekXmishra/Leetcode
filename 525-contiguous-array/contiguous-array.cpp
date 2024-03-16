class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int , int > mp;
        int n = nums.size();
        int sum = 0 ;
        int ans = 0;
        mp[0] = -1;
        for(int i = 0 ; i < n ; i++){
          if(nums[i] == 1){
          sum += nums[i];
          } else {
            sum += -1 ;
          }
          if(mp.find(sum) != mp.end()){
            ans = max(ans , i-mp[sum]);
          }
          else {
            mp[sum] = i;
          }

        }
        return ans ;
    }
};