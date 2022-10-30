//o(n)2

class Solution {
public:
    vector<int> minOperations(string boxes) {
        
        vector <int> res;
        
        for(int i = 0; i < boxes.length(); ++i){
            int c = 0;
            for(int j = 0; j < boxes.length(); ++j){
                if(boxes[j] == '1'){
                    c += abs(i-j);
                }
            }
            res.push_back(c);
        }
        
        return res;
        
    }
};

//o(n)

class Solution {
public:
    vector<int> minOperations(string boxes) {
        
        vector <int> resFwd(boxes.length());
        int count = 0;
        
        for(int i = 1; i < boxes.length(); ++i){
            if(boxes[i-1] == '1'){
                count++;
            }
            resFwd[i] = resFwd[i-1] + count;
        }
        
        count = 0;
        
        vector <int> resBwd(boxes.length());
        
        for(int i = boxes.length() - 2; i >=0 ; --i){
            
            if(boxes[i+1] == '1'){
                count++;
            }
            resBwd[i] = resBwd[i+1] + count;
        }
        
        vector <int> res(boxes.length());
        
        for(int i = 0; i < boxes.length(); ++i){
            res[i] = resFwd[i] + resBwd[i];
        }
        
        return res;
        
    }
};

//o(n) simplified

vector<int> res(boxes.length()); 
        
        for (int i = 0, ops = 0, cnt = 0; i < boxes.length(); ++i) {
           res[i] += ops;
           cnt += boxes[i] == '1' ? 1 : 0;
           ops += cnt;
        }
        
        for (int i = boxes.length() - 1, ops = 0, cnt = 0; i >= 0; --i) {
            res[i] += ops;
            cnt += boxes[i] == '1' ? 1 : 0;
            ops += cnt;
        }
        
        return res;