class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        sort(hand.begin() , hand.end());
        if(hand.size() % groupSize != 0) {
          return false ; 
        }
        int n = hand.size();
       map<int , int> mpp ;
       for(auto i : hand){
        mpp[i]++ ;
       }

       while(!mpp.empty()){
         int curr = mpp.begin() -> first; 
          for(int i = 0 ; i < groupSize ; i++){
            if(mpp[curr + i] == 0){
              return false; 
            }

            mpp[curr + i]-- ;
            if(mpp[curr + i] < 1){
              mpp.erase(curr + i);
            }
          }
       }
        return true;
    }
};