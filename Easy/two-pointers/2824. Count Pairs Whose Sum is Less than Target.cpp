class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int c = 0;
        int numsSize = nums.size();
        
        sort(nums.begin(), nums.end());
        
        int l = 0, h = numsSize -1;
        
        while(l<h){
            if((nums[l] + nums[h]) < target){
                c += (h-l);
                l++;
            }else{
                h--;
            }
        }
        
        return c;
    }
};

//brute force

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int c = 0;
        int numsSize = nums.size();
        
        for(int i=0; i<numsSize-1; ++i){
            for(int j=i+1; j<numsSize; ++j){
                if((nums[i] + nums[j]) < target) c++;
            }
        }
        
        return c;
    }
};