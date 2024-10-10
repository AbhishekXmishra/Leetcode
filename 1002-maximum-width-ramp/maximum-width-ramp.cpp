class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        vector<int> stack;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (stack.empty() || nums[stack.back()] > nums[i]) {
                stack.push_back(i);
            }
        }

        int maxi = 0;

        for (int j = n - 1; j >= 0; j--) {
            while (!stack.empty() && nums[j] >= nums[stack.back()]) {
                maxi = max(maxi, j - stack.back());
                stack.pop_back();
            }
        }
        return maxi;
    }
};