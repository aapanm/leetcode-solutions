class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int nc = false, cc = false, mx = INT_MIN;
        for(string c : strs){
            
            int cur;
            
            for(int i=0; i<c.size(); ++i){
                if(c[i] > 40 && c[i] < 50){
                    nc = true;
                }
                if(c[i] > 96 && c[i] < 123){
                    cc = true;
                }
            }
            
            if(cc) cur = c.size();
            else cur = stoi(c);
            
            
            if(cur > mx) mx = cur;
            
            cc = false;
            nc = false;
            
        }
        return mx;
    }
};