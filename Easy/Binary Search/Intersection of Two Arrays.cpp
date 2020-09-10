class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int, int>M;
        vector<int> res;
        
        for(int i = 0; i <nums1.size(); ++i){
            if(M.count(nums1[i])){
                M[nums1[i]]++;
            }else{
                M[nums1[i]] = 1;
            }
        }
        
        for(int i = 0; i<nums2.size(); ++i){
            if(M.count(nums2[i])){
                if(M[nums2[i]] >= 1){
                    res.push_back(nums2[i]);
                    M[nums2[i]] = 0;
                }
                
            }
        }
        
        return res;
    }
};
