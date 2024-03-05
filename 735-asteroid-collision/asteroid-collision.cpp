class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
     stack<int> s;
     vector<int> v;
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
       
       
        while(!s.empty()){
            v.push_back(s.top());
            s.pop();
        }
        
        reverse(v.begin(),v.end());
        
        return v;
        
    }
};