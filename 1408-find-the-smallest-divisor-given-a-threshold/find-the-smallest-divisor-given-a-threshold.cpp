class Solution {
public:
    int divide(vector<int> &nums, int divisor) {
        int sum = 0;
        for(int i=0; i<nums.size(); i++) {
            sum += ceil(double(nums[i]) / double(divisor));
        }
        return sum;
    }
    long long smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1 ;
        int high = *max_element(nums.begin() , nums.end());
        long long ans =  -1;
        while(low <= high){
            long long mid = low + (high - low) / 2 ;
            long long divi = divide(nums , mid);
                if(divi <= threshold){
                    
                    high = mid - 1 ;
                }
                else {
                    low = mid + 1;
                }
            }
       return low;
    }
};