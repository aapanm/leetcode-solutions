class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m=0, n=mat[0].size()-1, res=0;
        for(int i=0; i<mat.size(); ++i){
            for(int j=0; j<mat[0].size(); ++j){
                if(i==j) res+=mat[i][j];
            }
            
            if(m==n){
                
            }else{
                res+=mat[m][n];
            }
            m++;
            n--;
        }
        // cout << i << " " << j << endl;
        return res;
    }
};