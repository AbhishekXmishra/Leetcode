class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>p;
        vector<int>q;
      for(int i=0;i<nums.size();i++){
          p[nums[i]]++;
      }
      int m=k;
      int max=INT_MIN;
      int ele;

      while(m>0){
      for(auto i:p){
          if(i.second>max){
              ele=i.first;
              max=i.second;
          }
      }
     
      max=INT_MIN;
      q.push_back(ele);
       p.erase(ele);
       m--;

      }
      return q;
        
    }
};