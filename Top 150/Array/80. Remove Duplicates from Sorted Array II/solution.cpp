class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int numsLen = nums.size() - 1;
        int lPointer = 0;
        int rPointer = 0;
        int count = 0;

        for(lPointer = 0, rPointer = 0; rPointer <= numsLen; rPointer++){
            nums[lPointer++] = nums[rPointer];
            count++;
            if(rPointer+1 <= numsLen && nums[rPointer] == nums[rPointer+1]){
                if(count == 2){
                    while(nums[rPointer] == nums[rPointer+1]){
                        rPointer++;
                        if(rPointer + 1 > numsLen) break;
                    }
                    count = 0;
                }
            }else{
                count = 0;
            }
        }

        return lPointer;

    }
};