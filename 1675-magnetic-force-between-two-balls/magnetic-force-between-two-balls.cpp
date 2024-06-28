class Solution {
public:
    bool possible(int force , vector<int>& posit , int m){
        int first = posit[0];
        int cnt = 1 ;
        for(int i = 1 ; i < posit.size() ; i++){
           int curr = posit[i];
            
            if(curr - first >= force ){
                cnt ++ ;
                first = curr ; 
            }

            if(cnt == m){
                break ;
            }
        }
        return cnt == m ;
    }
    int maxDistance(vector<int>& posi, int m) {
        sort(posi.begin(), posi.end());
        int n = posi.size();
        int minforce = 1;
        int maxforce = posi[n - 1] - posi[0] ;
         int res ;
        while (minforce <= maxforce) {
            int midforce = minforce + (maxforce - minforce) / 2;
            if (possible(midforce, posi , m)) {
                 res = midforce;
                minforce = midforce + 1;

            } else {
                maxforce = midforce - 1;
            }
        }
        return res;
    }
};