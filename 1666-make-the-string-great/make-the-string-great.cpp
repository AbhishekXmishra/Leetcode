class Solution {
public:
    string makeGood(string s) {
     stack<char> st;
      for(int i = 0 ; i < s.length() ; i++){
          if(!st.empty() && s[i] != st.top()){
            if(tolower(st.top()) == tolower(s[i])){
              st.pop();
            }
            else{
              st.push(s[i]);
            }
          }
      else {
        st.push(s[i]);
      }

      }
   string ans;
        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
      
      /* int i=0;
      vector<char>ans;
      while(i<s.size()-1){
        char ch1=s[i];
        char ch2=s[i+1];
        if(ch1==ch2){
         ans.push_back(ch1);
         ans.push_back(ch2);
        }
        else{
          if()
        }
      }
   */


    }
};