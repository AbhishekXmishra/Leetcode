class Solution {
public:
    long long dividePlayers(vector<int>& skills) {

      long long total = 0;
        sort(skills.begin(), skills.end());
        long long n = skills.size();
        long long sum = skills[0] + skills[n - 1];
        for (long long i = 0; i < skills.size() / 2; i++) {
            long long tempsum = 0;
            long long prod = 1;
            tempsum +=skills[i] + skills[n-i-1];
            if (tempsum == sum) {
                prod = skills[i] * skills[n - i - 1];
                total += prod;
            } else {
                return -1;
            }
        }
        return total;
    }
};