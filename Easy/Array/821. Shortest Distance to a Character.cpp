//map and vector
class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        unordered_map <int, char> mp;
        for(int i=0; i<s.size(); ++i){
            if(s[i] == c) mp[i]=c;
        }
        vector <int> res;
        
        for(int i=0; i<s.size(); ++i){
            if(s[i] == c){
                res.push_back(0);
            }else{
                int rs, curr = INT_MAX;
                for(auto it=mp.begin(); it!=mp.end(); ++it){
                    rs = min(abs(i - it->first), curr);
                    curr = rs;
                }
                res.push_back(rs);
            }
        }
        
        return res;
                    
    }
};

//