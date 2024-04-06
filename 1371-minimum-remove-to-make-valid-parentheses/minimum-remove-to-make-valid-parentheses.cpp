class Solution {
public:
    string minRemoveToMakeValid(string s) {
      stack<int> st;
      int n = s.length();
      string ans = "" ;
      unordered_set<int> ind;
      for(int i= 0 ; i< s.length() ; i++ ){
        if(s[i] == '(') {
          st.push(i);
        }
        else if(s[i] == ')'){
          if(st.empty()){
            ind.insert(i);
          }
          else {
            st.pop();
          }
        }
}  

// open brackets only 

while(!st.empty()){
  ind.insert(st.top());
  st.pop();
}

for(int i = 0 ; i<n ; i++){
  if(ind.find(i) == ind.end()){
    ans.push_back(s[i]);
  }
}
    return ans;

   }
};