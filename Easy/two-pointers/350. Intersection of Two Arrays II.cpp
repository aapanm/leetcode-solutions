class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int, int> map;
        vector <int> res;
        
        for(int i = 0; i < nums1.size(); ++i){
            if(map.count(nums1[i])){
                map[nums1[i]]++;
            }else{
                map[nums1[i]] = 1;
            }
        }
        
        for(int i = 0; i < nums2.size(); ++i){
            if(map.count(nums2[i])){
                if(map[nums2[i]]){
                    res.push_back(nums2[i]);
                    map[nums2[i]]--;
                }
            }
        }
        
        return res;
    }
};