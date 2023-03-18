class Solution {
public:
    string freqAlphabets(string s) {
        string res;
        for(int i=0; i<s.size(); ++i){    
            if((i+2) < s.size()){
                if(s[i+2] == '#'){
                    string tmp;
                    tmp+=s[i];
                    tmp+= s[i+1];
                    res+=char(stoi(tmp) + 'a' - 1);
                    i = i+2;
                    continue;
                }
            }
            res+=(char((s[i] - '1') + 'a'));
        }
        
        return res;
    }
};