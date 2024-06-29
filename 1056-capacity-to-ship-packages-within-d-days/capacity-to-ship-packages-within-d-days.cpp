class Solution {
public:
    int solve(vector<int>& weight , int val ){
        int day = 1 ; int load = 0;
        for(int i = 0 ; i < weight.size() ; i++){
            if( weight[i] + load > val){
                day++ ;
                load = weight[i];
            }
            else {
                load += weight[i] ;
            }
        }
      return day ;
    }
    int shipWithinDays(vector<int>& weights, int days) {
    int low = *max_element(weights.begin() , weights.end());
    int high = accumulate(weights.begin(),weights.end(),0);
    while(low <= high){
     int mid = (low + high) / 2 ;
     int days_req  = solve(weights ,mid);
     if(days_req <= days){
        high = mid - 1; 
     }
     else {
        low = mid + 1 ;
           }
        }
     return low ;
    }
};