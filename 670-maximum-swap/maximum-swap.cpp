class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
        int n = s.length();
        vector<int> maxright(n);

        maxright[n - 1] = n - 1;

        for (int i = n - 2; i >= 0; i--) {
            if (s[i] > s[maxright[i+1]]) {
                maxright[i] = i;
            } else {
                maxright[i] = maxright[i + 1];
            }
        }

        for (int i = 0; i < n; i++) {
            if (s[i] != s[maxright[i]]) {
                swap(s[i], s[maxright[i]]);
                break;
            }
        }
        return stoi(s);
    }
};