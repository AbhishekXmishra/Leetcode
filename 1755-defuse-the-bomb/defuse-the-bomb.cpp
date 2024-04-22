class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
     int n = code.size();
    vector<int> result(n, 0);

    if (k == 0) {
        return result;
    }

    int sum = 0;
    int start, end;

    // Calculate the initial window indices based on the sign of k
    if (k > 0) {
        start = 1;
        end = k;
    } else {
        start = n + k;
        end = n - 1;
    }

    // Calculate the sum for the initial window
    for (int i = start; i <= end; ++i) {
        sum += code[i % n];
    }

    // Slide the window and update the result array
    for (int i = 0; i < n; ++i) {
        result[i] = sum;

        // Slide the window
        sum -= code[start % n];
        start++;
        end++;
        sum += code[end % n];
    }

    return result;   
    }
};