class Solution {
public:
    string getSmallestString(string s) {
        bool swapp = true; 
        for (int i = 0; i < s.length()-1; i++ ) {
            if ((s[i] % 2 == s[i+1] % 2)&& 
                (s[i] > s[i+1])) {
                swap(s[i], s[i+1]);
                swapp = true ;
                break;
            }
        }
        return s;
    }
};