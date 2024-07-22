class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = heights.size();
       vector<pair<string, int>> st;
       for(int i = 0 ; i < n ; i++ ){
        st.push_back(make_pair(names[i] , heights[i]));
       }

       sort(st.begin() , st.end() , [](const pair<string , int> &a , const pair<string , int> &b){
        return a.second > b.second ;
       });     
    
    vector<string> ans;
       for(auto &i : st){
        ans.push_back(i.first);
       }

       return ans;
    }
};