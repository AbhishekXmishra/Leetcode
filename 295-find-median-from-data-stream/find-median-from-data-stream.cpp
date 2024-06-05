class MedianFinder {
public:
   priority_queue<int> maxi;
   priority_queue<int, vector<int>, greater<int>> mini;
   double median=0.0; 
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        int element = num ;
        // case 1 
        if(maxi.size() == mini.size()){
          if(element > median){
            mini.push(element);
            median = mini.top();
          }
          else {
            maxi.push(element);
            median = maxi.top();
          }
        }
        // case 2
        else if(maxi.size() == mini.size() + 1){
              if(element > median){
                mini.push(element);
              }
              else {
                int maxTop = maxi.top();
                maxi.pop();
                mini.push(maxTop);
                maxi.push(element);
              }
            median = (maxi.top() + mini.top()) / 2.0 ;
        }
        // case 3 
        else if(mini.size() == maxi.size() + 1){
          if(element > median){
            int minTop = mini.top();
            mini.pop();
            maxi.push(minTop);
            mini.push(element);
          }
          else {
            maxi.push(element);
          }
          median = (maxi.top() + mini.top()) / 2.0 ;
        }
    }
    
    double findMedian() {
        return median ;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */