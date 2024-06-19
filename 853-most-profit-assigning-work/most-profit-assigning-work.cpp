class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
         int n = worker.size();
         int m = profit.size();
         int b = difficulty.size();
         int ans = 0 ;
         for(int i = 0 ; i < n ; i++){
            int temp = 0 ;
          for(int j = 0 ; j < b ; j++){
                if(worker[i] >= difficulty[j]){
                  temp = max(temp , profit[j]);
                }
          }
          ans += temp ;
         }
        return ans ;
    }
};