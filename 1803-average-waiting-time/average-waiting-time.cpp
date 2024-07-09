class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
       long long sum = 0;
        int prevEndTime = 0;

        for (const auto& customer : customers) {
            int arrival = customer[0];
            int timeNeeded = customer[1];
            prevEndTime = max(prevEndTime, arrival) + timeNeeded;
            sum += prevEndTime - arrival;
        }

        return static_cast<double>(sum) / customers.size();
    }
};