class Solution {
public:
    int longestPalindrome(string s) {
        int ans = 0 ;
        bool flag = false  ;
        unordered_map<char , int > mpp;
        for(int i = 0 ; i < s.length() ; i++){
          mpp[s[i]]++ ; 
        }
        for(auto i : mpp){
          if(i.second % 2 == 0 ){
            ans += i.second;
          }
          else {
            ans += i.second - 1;
            flag = true;
          }
        }

        if(flag){
           ans ++ ;
        }
        return ans ;
    }
};