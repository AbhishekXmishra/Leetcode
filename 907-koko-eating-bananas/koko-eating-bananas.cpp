class Solution {
public:
     long long solve(const vector<int>& piles, int k) {
        long long days = 0;
        for (int i = 0 ; i < piles.size() ; i++) {
            days += ceil( piles[i] / (double) k); 
        }
        return days;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int ans = -1 ; 
        int maxi =  *(max_element(piles.begin(), piles.end()));
        while(low <= maxi){
            int mid = low + (maxi - low) / 2;
            long long min_req = solve(piles , mid);

            if(min_req <= h){
                ans = mid ;
                maxi = mid - 1 ;
            }
            else {
                low = mid + 1 ;
            }
        }
  return ans ;
    }
};