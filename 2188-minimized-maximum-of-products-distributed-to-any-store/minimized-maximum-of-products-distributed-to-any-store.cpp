class Solution {
public:
    bool solve(vector<int>& nums , int mid , int n ){
        int store = 0 ;
        for(int i = 0 ; i < nums.size() ; i++){
            store += (nums[i] + mid - 1) / mid ;
        }
        return store <= n ; 
    }
    int minimizedMaximum(int n, vector<int>& nums) {
        int low = 1 ;
        int ans = -1 ;
        int high = *max_element(nums.begin() , nums.end());
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(solve(nums , mid , n )){
                ans = mid ;
                high = mid - 1 ;
            }
            else {
                low = mid + 1 ;
            }
        }
        return ans; 
    }
};