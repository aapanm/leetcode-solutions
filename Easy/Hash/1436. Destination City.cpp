class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        
        unordered_map <string, string> mp;
        string res;
        
        for(int i=0; i<paths.size(); ++i){
            mp[paths[i][0]]=paths[i][1]; 
        }
        
        string dest = mp[paths[0][0]];
        while(!dest.empty()){
            res = dest;
            dest = mp[dest];
        }
        
        return res;
        
    } 
};