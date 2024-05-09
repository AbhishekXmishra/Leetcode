class Solution {
public:
    long long maximumHappinessSum(vector<int>& arr, int k) {
        long long ans  = 0 ;
        sort(begin(arr) , end(arr) , greater<int>());
        int cnt = 0 ;
        for(int i = 0 ; i < k ; i++){
          ans += max(arr[i]- cnt , 0);
          cnt++ ;
        }
      return ans ;
    }
};