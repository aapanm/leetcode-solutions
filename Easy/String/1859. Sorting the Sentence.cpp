class Solution {
public:
    string sortSentence(string s) {
        map <int, string> mp;
        string wrd;
        int pos;
        for(int i=0; i<s.size(); ++i){
            if(s[i] == ' '){
                pos = int(wrd[wrd.size()-1]) - 48;
                mp[pos] = wrd.substr(0, wrd.size()-1);
                wrd.clear();
            }
            else wrd+=s[i];
        }
        pos = int(wrd[wrd.size()-1]) - 48;
        mp[pos] = wrd.substr(0, wrd.size()-1);
        string res;
        for(auto it=mp.begin(); it!=mp.end(); ++it){
            if(it->first != 1) res+=' ';
            res+=it->second;
        }
        
        return res;
    }
};