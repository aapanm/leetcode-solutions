class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        
        int res = 0;
        
        for(auto i : operations){
            if(i == "--X" || i == "X--" ){
                res--;
            }else{
                res++;
            }
        }
        
        return res;
    }
};