class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int , int> mpp;
        int max_count = 0 ;
        int res ;
        for(int i = 0 ;  i < nums.size() ; i++){
          mpp[nums[i]]++ ;
        }

        for (auto i : mpp) { 
        if (max_count < i.second) { 
        res = i.first; 
        max_count = i.second; 
       } 
    } 
    return res;    
    }
};