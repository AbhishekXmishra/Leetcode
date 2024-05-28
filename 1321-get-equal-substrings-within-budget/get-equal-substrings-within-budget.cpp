class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int l = 0 ; 
        int r = 0 ;
        int n = s.length();
        int cnt = 0 ;
        int ans = 0 ;
        while( r < n){
              cnt += abs(s[r] - t[r]);
              if(cnt > maxCost){
               cnt -= abs(s[l] - t[l]);
               l++ ;
              }
              ans = max(ans , r-l+1);
              r++ ;    
        } 
        return ans ;
    }
};