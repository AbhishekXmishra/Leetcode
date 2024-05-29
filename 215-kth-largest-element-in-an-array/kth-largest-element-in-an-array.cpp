class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int , vector<int> , greater<int> > pq;
         for(int i = 0 ; i < k ; i++){
          int element = nums[i];
          pq.push(element);
      }
      
      for(int i = k ; i < nums.size()  ; i++){
          int  element = nums[i];
          if(element > pq.top()){
              
              pq.push(element);
              pq.pop();
          }
      }
      return pq.top();
    }
};