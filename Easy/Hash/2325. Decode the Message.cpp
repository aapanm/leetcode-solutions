class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map <char, int> mp;
        int pos = 1;
        for(int i=0; i<key.size(); ++i){
            if(key[i]!=' '){
                if(!mp[key[i]]){
                    mp[key[i]] = pos++;
                }
            }
        }
        
        string res;
        
        for(int i=0; i<message.size(); ++i){
            if(mp[message[i]]){
                res+='a' + (mp[message[i]] - 1);
            }else{
                res+=message[i];
            }
        }
        
        return res;
    }
};