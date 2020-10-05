class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        
        vector <string> stack;
        
        int i = 1;
        int j = 0;
        
        while(i<=target[target.size()-1]){
            
            if(target[j] != i){
                stack.push_back("Push");
                stack.push_back("Pop");
            }else{
                stack.push_back("Push");
                j++;
            }
            ++i;
        }
        
        return stack;
    }
};
