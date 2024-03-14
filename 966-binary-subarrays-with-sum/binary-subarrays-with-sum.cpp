class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        map <int , int > mpp;
        mpp[0] = 1 ;
        int sum=0;
        int cnt =0;
        for(int i =0; i<nums.size() ; i++){
            sum += nums[i];
            int remove = sum-goal;
            cnt += mpp[remove];
            mpp[sum] += 1 ; 
        }
        return cnt ;
    }
};