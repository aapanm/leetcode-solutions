class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int c = 0;
        
        for(int i = 0; i<grid.size(); ++i){
            c += binarySearch(grid[i], 0, grid[i].size()-1, 0);
        }
        
        return c;
    }
    
    int binarySearch(vector<int>&nums, int min, int max, int pot){
        
        int p = (min+max)/2;
        
        if(nums[p] < 0){
            if(p == min && p == max){
                return (nums.size()-p);
            }
            if(p-1 < min){
                return binarySearch(nums, min, min, p);
            }else{
                return binarySearch(nums, min, p-1, p);
            } 
        }else{
            if(p == min && p == max){
                if(nums[pot] < 0){
                   return (nums.size()-pot); 
                }else{
                    return 0;
                }
                
            }
            if(p+1 > max){
                return binarySearch(nums, max, max, pot);
            }else{
                return binarySearch(nums, p+1, max, pot);
            }
            
        }
    }
};
