//o(n)
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map <int, int> mp;
        for(int i=0; i<edges.size(); ++i){
            mp[edges[i][0]]++;
            mp[edges[i][1]]++;
        }
        for(auto it=mp.begin(); it!=mp.end(); it++){
            if(it->second ==  edges.size()) return it->first;
        }
        return 0;
    }
};

//o(1)
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        if(edges[0][0] == edges[1][0]) return edges[0][0];
        else if(edges[0][0] == edges[1][1]) return edges[0][0];
        else return edges[0][1];
    }
};