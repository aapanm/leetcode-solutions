class Solution {
public:
    int search(vector<int>& nums, int target) {
        return binarySearch(nums, target, 0, nums.size()-1);
    }
    
    int binarySearch(vector<int>& nums, int target, int min, int max){
        int p = (min+max)/2;
        
        if(nums[p] == target){
            return p;
        }else if(p ==  min && p == max && nums[p]!=target){
            return -1;
        }else{
            if(target > nums[p]){
                if(p+1 > max){
                    return binarySearch(nums, target, max, max);
                }else{
                    return binarySearch(nums, target, p+1, max);
                }
            }else{
                if(p-1 < min){
                    return binarySearch(nums, target, min, min);
                }else{
                    return binarySearch(nums, target, min, p-1);
                }
            }
        }
    }
};
