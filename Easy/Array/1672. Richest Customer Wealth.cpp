class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int mx = INT_MIN;
        for(int i = 0; i<accounts.size(); ++i){
            int sm = 0;
            for(int j=0; j<accounts[i].size(); ++j){
                sm+=accounts[i][j];
            }
            if(sm > mx) mx = sm;
        }
        return mx;
    }
};