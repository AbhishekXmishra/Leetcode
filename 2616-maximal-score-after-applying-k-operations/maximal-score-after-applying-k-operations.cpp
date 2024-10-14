class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> pq;
        long long score = 0 ;
        for (int num : nums) {
            pq.push(num);
        }

      while(k > 0){
        score += pq.top();
        long long rem = ceil((double)pq.top() / 3);
        pq.pop();
        pq.push(rem);
        k--;
      }
   return score;
    }
};