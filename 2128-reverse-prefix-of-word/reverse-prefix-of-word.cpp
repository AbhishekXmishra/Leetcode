class Solution {
public:
    string reversePrefix(string s, char ch) {
       int idx = -1 ;
        for(int i = 0 ; i < s.length() ; i++){
          if(s[i] == ch){
            idx = i ;
            break ;
          } 
        }
        if(idx == -1){
          return s;
        }
        for(int i = 0 ; i <= idx ; i++){
          swap(s[i] , s[idx]);
          idx-- ;
        }

        return s;
    }
};