class Solution {
public:
        int fun(vector<int>& nums, int k){
        if( k <0) return 0;
        int j=0,ans=0,sum=0;

        for(int i=0;i<nums.size();i++){
            sum+=nums[i] %2;

            while(sum> k){
                sum-=nums[j] % 2;
                j++;
            }

            ans+=(i-j+1);

        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
         return fun(nums,k)-fun(nums,k-1);
    }
};