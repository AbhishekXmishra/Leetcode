class Solution {
public:
    int numWaterBottles(int bot, int exc) {
        int ans = bot ;
        int rem = 0 ;
        int div = 0 ;
        while(bot >= exc){
            int rem = bot % exc ;
            int div = bot / exc;
            ans += div ;
            bot = rem + div ;
        }

        return ans ;
    }
};