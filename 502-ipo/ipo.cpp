class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<pair<int , int>> arr;
        for(int i = 0 ; i < capital.size() ; i++){
            arr.push_back({capital[i] ,profits[i]});
        }
        
        sort(arr.begin() , arr.end());
        
        priority_queue<int> pq ;

        int i = 0 ;

        while(k--){
            while( i < arr.size() && arr[i].first <= w){
                pq.push(arr[i].second);
                i++ ;
            }

                if(pq.empty()){
                    break;
                }
           
                w += pq.top();
                pq.pop();
            

        }    
    return w ;

    }
};