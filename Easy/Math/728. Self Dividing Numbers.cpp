//without string conversion

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int> res;
        
        for(int i=left; i<=right; ++i){
            int t = i;
            bool c = true;
            while(t){
                int n = t%10;
                if(n==0 || (i%n)){c=false; break;}
                t/=10;
            }
            if(c) res.push_back(i);
        }
        
        return res;
    }
};

//with string conversion
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int> res;
        
        for(int i=left; i<=right; ++i){
            string s = to_string(i);
            for(int j=0; j<s.size(); ++j){
                int num = (s[j] - '1') + 1;
                if(num==0 || (i%num)){break;}
                if(j==s.size()-1) res.push_back(stoi(s));
            }
        }
        
        return res;
    }
};