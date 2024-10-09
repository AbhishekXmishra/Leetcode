class Solution {
public:
    int minAddToMakeValid(string s) {
        int op = 0;
        int cl = 0;
        
        for (char &ch : s) {
            if (ch == '(') {
                op++;
            } else {
                if (op > 0) {
                    op--;
                } else {
                    cl++;
                }
            }
        }
        
        return op + cl;
    }
};
