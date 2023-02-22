class Solution {
public:
    string interpret(string command) {
        string s;
        for(int i=0; i<command.size(); ++i){
            if(command[i] == '('){
                if(command[i+1] == ')'){
                    s+='o';
                    i+=1;
                }else{
                    s+="al";
                    i+=3;
                }
            }else{
                s+=command[i];
            }
        }
        return s;
    }
};