
const int ZERO = []()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	return 0;
}();

class Solution {
public:
    int numRescueBoats(vector<int>& arr, int limit) {
        int cnt = 0 ;
        int n = arr.size() ;
        int l = 0 ;
        int r = n - 1;
        int i=0 ;
        sort(arr.begin() , arr.end());
        while(l <= r){
         if(arr[l] + arr[r] <= limit){
         l++ ;
         r-- ;
         }
         else {
          r-- ;
         }
         cnt ++ ;
        }
      return cnt ;
    }
};