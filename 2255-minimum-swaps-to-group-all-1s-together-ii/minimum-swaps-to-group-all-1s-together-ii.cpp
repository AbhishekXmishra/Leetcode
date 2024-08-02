class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        int totalones = accumulate(nums.begin(), nums.end(), 0);

        int i = 0;
        int j = 0;

        int curr = 0;
        int maxcnt = 0;

        while (j < 2 * n) {
            if (nums[j % n] == 1) {
                curr++;
            }

            if (j - i + 1 > totalones) {
                curr -= nums[i % n];
                i++ ;
            }

            maxcnt = max(maxcnt, curr);
            j++;
        }

        return totalones - maxcnt;
    }
};