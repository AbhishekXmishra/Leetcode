class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int , int>> pq ;
        unordered_map<int , int> mpp;
        for(int i=0;i<nums.size();i++){
          mpp[nums[i]]++;
      }
        vector<int> ans;
          
          for(auto i : mpp){
            pq.push({i.second , i.first });
          }

          while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
          }

        return ans ;
    }
};