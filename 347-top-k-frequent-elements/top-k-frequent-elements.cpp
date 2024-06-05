class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> mpp;
        for(int i=0;i<nums.size();i++){
          mpp[nums[i]]++;
      }
        vector<int> ans;
          int max = INT_MIN;
          int res;
          int m = k ;

            while( m > 0){
              for(auto i : mpp){
                if(max < i.second){
                max = i.second ;
                res = i.first ;
                }
              }
          
          max = INT_MIN;
          ans.push_back(res);
          mpp.erase(res);
          m-- ;
    }

        return ans ;
    }
};