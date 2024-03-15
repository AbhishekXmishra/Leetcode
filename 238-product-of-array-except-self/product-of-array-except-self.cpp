class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int zero_count = 0;
        int product_without_zero = 1;
        for (int& num : nums) {
            if (num == 0) {
                zero_count++;
            } else {
                product_without_zero *= num;
            }
        }

        vector<int> res(n);
        for (int i =0 ; i < n ; i++) {
            int num = nums[i];
            if (num != 0) {
                if (zero_count > 0) {
                    res[i] = 0;
                } else {
                    res[i] = product_without_zero / nums[i];
                }
            } else {
                if (zero_count > 1) {
                    res[i] = 0;
                } else {
                    res[i] = product_without_zero;
                }
            }
        }
        return res;
    }
};