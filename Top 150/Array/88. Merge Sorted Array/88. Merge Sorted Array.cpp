class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1, j=n-1, l=m+n-1;
        
        while(i>-1 && j>-1){
            if(nums1[i] > nums2[j]){
                nums1[l--] = nums1[i--];
            }else{
                nums1[l--] = nums2[j--];
            }
        }
        
        
        if(j>=0){
            while(j>-1){
                nums1[l--]=nums2[j--];
            }
        }
            
    }
};