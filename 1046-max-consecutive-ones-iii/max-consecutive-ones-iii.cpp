class Solution {
public:
    int longestOnes(vector<int>& arr, int k) {
        int r=0;
        int l=0;
        int maxlen=0;
        int zeroes=0;
        while(r<arr.size()){
            if(arr[r]==0){
                zeroes++;
            }
            if(zeroes>k){
                if(arr[l]==0){
                    zeroes--;
                }
                l++;
            }
            if(zeroes<=k){
                maxlen=max(maxlen,r-l+1);
            }
            r++;
            
        }
        return maxlen;
    }
};