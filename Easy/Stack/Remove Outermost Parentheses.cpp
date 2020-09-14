class Solution {
public:
    string removeOuterParentheses(string S) {
        
        int op = 0;
        string res;
        
        for(char c : S){
           if(c == '('){
               if(op>0){
                   res += c;
               }
               op++;
           }else{
               if(op > 1){
                   res += c;
               }
               op--;
           }
        }
        
        return res;
    }
    
};
