class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        
        map <string, int> m;
        
        m["type"] = 0;
        m["color"] = 1;
        m["name"] = 2;
        
        int res = 0;
        
        for(int i = 0; i < items.size(); ++i){
            if(items[i][m[ruleKey]] == ruleValue){
                res++;
            }
        }
        
        return res;
        
        
    }
};