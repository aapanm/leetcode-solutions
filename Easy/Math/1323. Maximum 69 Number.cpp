class Solution {
public:
    int maximum69Number (int num) {
        string numStr = to_string(num);
        for(auto &i:numStr){
            if(i=='6'){
                i='9';
                break;
            }
        }
        return stoi(numStr);
    }
};

//math
class Solution {
public:
    int maximum69Number (int num) {
        int add;
        string numStr = to_string(num);
        for(int i=0; i<numStr.size(); ++i){
            if(numStr[i]=='6'){
                return num + 3*(pow(10, (numStr.size()-(i+1))));
            }
        }
        return num;
    }
};