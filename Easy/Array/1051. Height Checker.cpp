class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int i = 0;
        int j = heights.size()-1;
        int c = 0;
        
        while(i<=j){
            if(heights[i] <= heights[j]){
                 i++;
            }
            else{
                swap(heights[i], heights[j]);
                j--;
                c++;
            }
        }
        if(c) return c+1;
        return c;
    }
};