class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        
        vector<vector<int>> res( grid.size()-2 , vector<int> (grid.size()-2, 0));
        
        int i = 0, j =0, start_i = 0, start_j = 0;
        
        while(i < grid.size() - 1  || j < grid.size() - 1 ){
            
            
            // cout << i << " " << j << endl;
            int mx = INT_MIN;
            
            int rw = ((start_i +3) < grid.size() ? (start_i +3) : grid.size());
            int col = ((start_j +3) < grid.size() ? (start_j +3) : grid.size());
            
            for(i = start_i; i < rw; i++){
                for(j = start_j; j < col; j++){
                    if(grid[i][j] > mx) mx = grid[i][j];
                }
            }
            
            // cout << mx << endl;
            
            
            res[start_i][start_j] = mx;
            
            if(j < grid.size()) start_j += 1;
            else start_i += 1, start_j = 0;
            
            i--;
            j--;
            
            // cout << "after " << i << " " << j << endl;
            
        }
        
        // cout << "loop out " << i << " " << j << endl;
        
        return res;
    }
};