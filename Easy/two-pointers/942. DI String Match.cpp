class Solution {
public:
    vector<int> diStringMatch(string s) {
        
        int n = s.size();
        int h = n, l = 0;
        vector <int> res(n+1);
        
        for(int i=0; i<n; ++i){
            if(s[i] == 'I'){
                res[i] = l++;
                if(i==n-1) res[i+1] = l++;
            }else{
                res[i] = h--;
                if(i==n-1) res[i+1] = h--;
            }
        }
        
        return res;
    }
};