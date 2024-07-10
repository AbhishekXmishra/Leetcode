class Solution {
public:
    int minOperations(vector<string>& logs) {
        int depth = 0 ;
        for(int i = 0 ; i < logs.size() ; i++){
            if(logs[i] == "../" ){
                depth -- ;
                if(depth < 0){
                    depth = 0 ;
                }
            }
            else if(logs[i] == "./"){
                continue ;
            }
            else{
                depth++ ;
            }
        }
        return depth ;
    }
};