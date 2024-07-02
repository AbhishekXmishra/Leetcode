class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans; 
        unordered_map<int , int> mpp ;
        for(auto i : nums1){
            mpp[i]++ ;
        }
        for(int i = 0 ; i < nums2.size() ; i++ ){
            if(mpp.find(nums2[i]) != mpp.end() && mpp[nums2[i]] != 0 ){
                ans.push_back(nums2[i]);
                mpp[nums2[i]]-- ;
            }
        }
        return ans ;
    }
};