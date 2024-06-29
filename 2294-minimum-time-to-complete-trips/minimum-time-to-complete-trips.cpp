class Solution {
public:
    bool check(vector<int>& times, long long mid, int k) {
        long long cnt = 0;
        for (int i = 0; i < times.size(); i++) {
            cnt += (mid / times[i]);
            if (cnt >= k) {
                return true;
            }
        }
        return cnt >= k;
    }

    long long minimumTime(vector<int>& time, int k) {
        long long start = 1;
        long long maxi = *max_element(time.begin(), time.end());
        long long end = maxi * k;
        long long res = 0; 
        while (start <= end) {
            long long mid = start + (end - start) / 2;
            if (check(time, mid, k)) {
                res = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return res;
    }
};
