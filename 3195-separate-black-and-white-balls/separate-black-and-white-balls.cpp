class Solution {
public:
    long long minimumSteps(string s) {
        int countone = 0;  
        long long steps = 0; 
         int n = s.length();
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                countone++; 
            } else {
                steps += countone;
            }
        }
        return steps;
    }
};