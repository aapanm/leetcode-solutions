class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int min = nums[0];
        int max = nums[nums.size()-1];
        
        return binarySearch(nums, 0, nums.size()-1, target);
    }
    
     int binarySearch(vector<int>& nums, int min, int max, int target){
         int p = (min + max)/2;
         cout << p;
         if(nums[p] == target){
             return p;
         }else if(p == min && p == max && nums[p]!=target){
              if(nums[p] < target){
                    return p+1;
                }else{
                    return p;
                }         
         }else{
             if(nums[p] > target){
                if(p == 0){
                    return binarySearch(nums, min, p, target);
                }
                if((p-1)<min){
                    return binarySearch(nums, min, min, target);
                }
                return binarySearch(nums, min, p-1, target);
             }else{
                if(p+1 > max){
                    return binarySearch(nums, max, max, target);
                }
                return binarySearch(nums, p+1, max, target);
             }
         }
     }
};
