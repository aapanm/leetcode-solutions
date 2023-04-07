//o(nlogn)
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>res;
        for(int i=0; i<=n; ++i){
            int sm=0, n=i;
            while(n){
                sm+=n%2;
                n/=2;
            }
            res.push_back(sm);
        }
        return res;
    }
};