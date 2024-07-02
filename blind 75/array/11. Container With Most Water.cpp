class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int i = 0;
        int j = height.size() - 1;
        int maxCap = INT_MIN;

        while(i < j){
            int mini = min(height[i], height[j]);
            int cap = mini * (j - i);
            if(cap > maxCap) maxCap = cap;
            height[i] > height[j] ? j-- : i++;
        }

        return maxCap;
    }
};