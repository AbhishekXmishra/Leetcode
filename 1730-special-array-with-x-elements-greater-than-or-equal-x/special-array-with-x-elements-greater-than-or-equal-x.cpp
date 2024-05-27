class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> freq(n+1);

        for(int i = 0 ;  i< n ; i++){
          int num = nums[i];
          freq[min(n , num)]++ ;
        }
    int sum = 0 ;
    for(int x = n ; x>= 0 ; x-- ){
        sum += freq[x];

        if(x == sum){
          return x ;
        } 

    }

    return -1 ;
    } 
};