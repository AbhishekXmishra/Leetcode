class Solution {
public:
    string removeKdigits(string s, int k) {
      stack<char> st;
        string str;
        
        for (char c : s) {
            while (!st.empty() && k > 0 && st.top() > c) {
                st.pop();
                k--;
            }
            st.push(c);
        }
        
        // Removing remaining digits if k is still greater than zero
        while (k > 0 && !st.empty()) {
            st.pop();
            k--;
        }
        
        
        while (!st.empty()) {
            str += st.top();
            st.pop();
        }
        
       
        reverse(str.begin(), str.end());
        
      //  removing extra zer0 like in case 2 
        while (!str.empty() && str.front() == '0') {
            str.erase(0, 1);
        }
        
       
        if (str.empty()) {
            return "0";
        }
        
        return str;
        
    }
};