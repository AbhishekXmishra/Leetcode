class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
     stack<int> s;
       for(int i= 0 ; i < arr.size() ; i++){
           if(arr[i] > 0 ){
               s.push(arr[i]);
               }
            else {
                 while(!s.empty() && s.top() > 0 && s.top() < abs(arr[i])){
                     s.pop();
                 }

             if(s.size() > 0 && s.top() == abs(arr[i])){
                 s.pop();
             }

             else{
                    if(s.empty() || s.top() < 0){
                        s.push(arr[i]);
                    }
                }
             }
         }
       
       
         vector<int> res(s.size());
        for(int i = (int)s.size() - 1; i >= 0; i--) {
            res[i] = s.top();
            s.pop();
        }
        return res;
    }
};