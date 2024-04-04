class Solution {
public:
    int maxDepth(string s) {
        int cnt = 0;
        int max_cnt = 0 ;
        for(auto e : s ){
          if(e == '('){
            cnt++ ;
            if(cnt > max_cnt ){
              max_cnt = cnt ;
            }
          }
          else if(e== ')'){
            cnt -- ;
          }
        }
        return max_cnt;
    }
};