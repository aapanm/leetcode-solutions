class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
        int sum = 0;
        int odds = 1;
        
        while(odds <= arr.size()){
            for(int i = 0;  i <= (arr.size() - odds) ; ++i){
                for(int j = i; j < i + odds; ++j){
                    sum += arr[j];
                }
            }
            odds+=2;
        }
        
        return sum;
        
    }
};