class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        
        int p = 0, g = 0, m = 0, t = travel.size() - 1;
        int gC = 0, pC = 0, mC = 0;
        
        for(int i = garbage.size() - 1 ; i >= 0; i--){
            
            for(int j = 0; j < garbage[i].length(); ++j){
                if(garbage[i][j] == 'G') g++, gC =1;
                if(garbage[i][j] == 'P') p++, pC = 1;
                if(garbage[i][j] == 'M') m++, mC = 1;
            }
            
            if(i > 0){
                
                if(gC) g += travel[t];
                if(pC) p += travel[t];
                if(mC) m += travel[t];
            
                t--;
                
            }
        }
        
        return g+p+m;
        
    }
};