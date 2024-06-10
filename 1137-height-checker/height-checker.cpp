class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int cnt = 0 ;
        int n = heights.size();

        vector<int> expected ;
        for(int i = 0 ; i < n ; i++){
           expected.push_back(heights[i]);
        }

        sort(expected.begin() , expected.end());

        for(int i = 0 ; i< n ; i++){
            if(heights[i] != expected[i]){
              cnt++ ;
            }
        }

      return cnt ; 
    } 
};