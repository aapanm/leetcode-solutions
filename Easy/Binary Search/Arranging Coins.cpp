class Solution {
public:
    int arrangeCoins(int n) {
        long long int sum = 0;
        int i;
        for(i = 1; i<=n; ++i){
            sum = sum +i;
            if(sum > n){
               break;
            }
        }
        
        return i-1;
    }
};
