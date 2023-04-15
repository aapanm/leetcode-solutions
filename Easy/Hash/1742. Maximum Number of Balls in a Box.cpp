class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        unordered_map <int, int> mp;
        int mx = INT_MIN;
        for(int i=lowLimit; i<=highLimit; ++i){
            int n = i, sum=0;
            while(n){
                sum+=(n%10);
                n/=10;
            }
            mp[sum]++;
        }
        for(auto it=mp.begin(); it!=mp.end(); ++it){
            if(it->second > mx) mx = it->second;
        }
        return mx;
    }
};