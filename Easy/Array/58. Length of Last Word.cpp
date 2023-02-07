//conditional check
class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int spcChck = 0, wrdChck =0, count = 0;
        for(int i=s.size()-1; i>=0; --i){
            if(s[i]==' '){
                if(wrdChck) break;
                spcChck=1;
            }else{
                wrdChck=1;
                count++;
            }
        }
        
        return count;
    }
};

//without conditional check
class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int t = s.size()-1, l = 0;

        while(t>=0 && s[t]==' ')t--;
        while(t>=0 && s[t]!=' ')l++, t--;
        
        return l;
    }
};