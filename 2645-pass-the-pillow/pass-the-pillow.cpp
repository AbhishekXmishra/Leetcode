class Solution {
public:
    int passThePillow(int n, int time) {
        int j = 1;
        int dir = 1 ;
        for(int i = 0 ; i < time ; i++){
                j += dir ;

                if(j == n || j == 1 ){
                    dir *= -1 ;
                }
        }
        return j ;
    }
};