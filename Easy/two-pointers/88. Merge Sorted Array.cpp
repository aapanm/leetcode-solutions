class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i = 0, j = 0, k = 0;
        
        vector <int> res;
        
        while(i < m && j < n){
            if(nums1[i] < nums2[j]){
                res.push_back(nums1[i++]);
            }else if(nums1[i] > nums2[j]){
                res.push_back(nums2[j++]);
            }else{
                res.push_back(nums1[i++]);
                res.push_back(nums2[j++]);
            }
        }

        
        while(i<m){
            res.push_back(nums1[i++]);
        }
        
        while(j<n){
            res.push_back(nums2[j++]);
        }
        
       for(int i = 0; i< res.size(); ++i){
            cout << res[i];
       }
        
        nums1 = res;
    }
};