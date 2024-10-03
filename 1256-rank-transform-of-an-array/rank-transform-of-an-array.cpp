class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int> temp(n);
        unordered_map<int, int> mpp;
        vector<int> ans;
        int rank = 1 ;
        for (int i = 0; i < arr.size(); i++) {
            temp[i] = arr[i];
        }

        sort(temp.begin(), temp.end());

        for (int i = 0; i < temp.size(); i++) {
          if(mpp.find(temp[i]) != mpp.end()){
            continue ;
          }
            mpp[temp[i]] = rank;
            rank ++ ;
        }

        for (int i = 0; i < arr.size(); i++) {
            ans.push_back(mpp[arr[i]]);
        }

        return ans;
    }
};