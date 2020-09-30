//stack solution

class Solution {
public:
    string removeDuplicates(string S) {
        
        std::string res;
        
        stack <char> s;
        
        for(char c: S){
            if(s.empty()){
                s.push(c);
            }else{
                if(s.top() == c){
                    s.pop();
                }else{
                    s.push(c);
                }
            }
        }
        
        while(!s.empty()){
            res+=s.top();
            s.pop();
        }
        
        reverse(res.begin(), res.end());
        
        return res;
    }
};

//two pointer solution

class Solution {
public:
    string removeDuplicates(string S) {
        
        int i=0, j=0;
        
        for(int i = 0; i < S.size(); ++i, ++j){
            
            S[j] = S[i];
            
            if(j > 0 && S[j-1] == S[j]) j-=2;
        }
        
        
        return S.substr(0, j);
    }
};