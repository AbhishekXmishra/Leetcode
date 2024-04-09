class Solution {
public:
    int totalFruit(vector<int>& arr) {
        int l = 0 ;
        int k = 2;
        int r = 0 , maxlen = 0 ;
        int n = arr.size();
        unordered_map<int, int> mpp;
        for(r ; r<n ; r++){
          mpp[arr[r]]++;
          if(mpp.size() > k){
          
              mpp[arr[l]]-- ;
              if(mpp[arr[l]] == 0){
                mpp.erase(arr[l]);
              }
              l++ ;
            
          }
        if(mpp.size() <= k){
          maxlen = max(maxlen , r-l+1);
        }
        }
      return maxlen ;
    }
};