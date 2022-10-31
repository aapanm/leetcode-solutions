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

//another

class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        
        int cost = 0;
        
        for(int i = 0 ; i < garbage.size(); i++){
            cost+=garbage[i].size();
        }
        
        vector <int> travCost(travel.size());
        
        travCost[0] = travel[0];
        
        if(travel.size() > 1){
            for(int i = 1; i < travel.size(); ++i){
                travCost[i] = travCost[i-1] + travel[i];
            }
        }
        
        int g=0, p=0, m=0;
        
        for(int i = garbage.size() - 1; i >= 0; --i){
            if (g && p && m) break;
            for(int j = 0; j < garbage[i].size(); ++j){
                if(i > 0){
                    if(garbage[i][j] == 'G') {if(!g){cost+=travCost[i-1], g = 1;}}
                    if(garbage[i][j] == 'P') {if(!p){cost+=travCost[i-1], p = 1;}}
                    if(garbage[i][j] == 'M') {if(!m){cost+=travCost[i-1], m = 1;}}
                }
            }
        }
        
        return cost;
        
    }
};