class Solution {
public:
    int countPoints(string rings) {
        vector <int> bools (3);
        unordered_map <int, vector<int>> mp;
        for(int i=0; i<rings.size(); i+=2){
            int pos = (int)rings[i+1] - 48;
            if(!mp.count(pos)) mp[pos] = bools;
            if(rings[i] == 'R'){
                mp[pos][0]++;
            }else if(rings[i] == 'G'){
                mp[pos][1]++;
            }else if(rings[i] == 'B'){
                mp[pos][2]++;
            }
        }
        int res=0;
        for(auto it=mp.begin(); it!=mp.end(); ++it){
            int t = 0;
            for(int i=0; i<3; ++i){
                if(it->second[i]){
                    t++;
                }else{
                    t = 0;
                    break;
                }
            }
            res += t/3;
        }
        return res;
    }
};