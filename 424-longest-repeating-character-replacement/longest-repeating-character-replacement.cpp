class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        int maxlen =0;
        int maxf = 0 ;
        int l =0 , r= 0 ;
        int mpp[26] = {0}; 
        while(r < n){
            mpp[s[r]-'A']++ ;
            maxf = max(maxf , mpp[s[r] - 'A']);
            if(((r-l+1)-maxf)>k){
                mpp[s[l]-'A']--;
                maxf=0;
                for(int i=0; i<26; i++){
                    maxf=max(maxf, mpp[i]);
                    
                }
                l++;
            }
          if((r-l+1) - maxf <= k){
            maxlen = max(maxlen , r-l+1);
           }
          r++ ;
        }
      return maxlen ;
    }
};