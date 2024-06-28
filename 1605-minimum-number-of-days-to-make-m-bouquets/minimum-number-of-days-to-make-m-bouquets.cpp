class Solution {
public:
    int make(vector<int> & blooms , int mid , int k ){
                int cnt = 0 ;
                int total = 0 ;
                for(int i = 0 ; i < blooms.size() ; i++){
                    if(blooms[i] <= mid) {
                        cnt ++ ;
                    }
                    else {
                        cnt = 0 ;
                    }

                    if(cnt == k){
                        total ++ ;
                        cnt = 0 ;
                    }
                }
                return total ;
    }

    int minDays(vector<int>& bloom, int m, int k) {
        int start = 0 ;
        int end = *max_element(bloom.begin() , bloom.end());

        int min = -1 ;
        while(start <= end){
            int mid = start + (end - start) / 2 ;
            
            if(make(bloom , mid , k) >= m){
                min = mid ;
                end = mid - 1;
            }
            else {
                start = mid + 1 ;
            }
        
        }
       return min ;
    }
};