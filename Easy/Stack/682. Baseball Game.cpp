class Solution {
public:
    int calPoints(vector<string>& ops) {
        int sum = 0;
        
        stack <string> s;
        
        for (int i = 0; i < ops.size(); ++i){
            if(ops[i] == "C"){
                sum -= stoi(s.top());
                s.pop();
                if(!s.empty()){
                   if(s.top() == "D"){
                        s.pop();
                    } 
                }
            }else if(ops[i] == "D"){
                int n = 2*stoi(s.top());
                sum += n;
                s.push(ops[i]);
                s.push(to_string(n));
            }else if(ops[i] == "+"){
                   string x = s.top();
                   s.pop();
                   int n;
                   if(s.top() == "D"){
                       s.pop();
                       n = stoi(s.top()) + stoi(x);
                       s.push("D");
                   }else{
                       n = stoi(s.top()) + stoi(x);  
                   }
                   sum += n;
                   s.push(x);
                   s.push(to_string(n));
            }else{
                s.push(ops[i]);
                sum += stoi(ops[i]);
            }
        }
        
        return sum;
    }
};

//vector

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector <int> ops;
        for(int i=0; i<operations.size(); ++i){
            if(operations[i]=="C"){
                ops.pop_back();
            }else if(operations[i]=="D"){
                ops.push_back((ops[ops.size()-1]*2));
            }else if(operations[i]=="+"){
                ops.push_back(ops[ops.size()-1]+ops[ops.size()-2]);
            }else{
                ops.push_back(stoi(operations[i]));
            }
        }
        int res=0;
        for(int i=0; i<ops.size(); ++i){
            res+=(ops[i]);
        }
        return res;
    }
};