class Solution {
public:
    bool isPoss(vector<int>& nums, int maxop, int mid) {
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            int a = nums[i];
            if (a > mid) {
                if (a % mid == 0) {
                    cnt += a / mid;
                    cnt--;
                } else {
                    cnt += a / mid;
                }
            }
        }

        if (cnt <= maxop) {
            return true;
        }

        return false;
    }
    int minimumSize(vector<int>& nums, int k) {
            int start = 1 ;
            int end = *max_element(nums.begin() , nums.end());
            int ans = 0 ;
            while( start <= end){
                int mid = start + (end - start) / 2 ;
                if(isPoss(nums , k , mid)){
                    ans = mid ;
                    end = mid - 1 ;
                }
                else {
                    start = mid + 1 ;
                }
            }
            return ans ;
    }
};