//hashmap

class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        
        map <int, int> m;
        int ns1 = nums1.size();
        int ns2 = nums2.size();
        
        for(int i=0; i<ns1; ++i){
            m[nums1[i][0]] = nums1[i][1];
        }
        
        for(int i=0; i<ns2; ++i){
            m[nums2[i][0]]+=nums2[i][1];
        }
        
        vector<vector<int>> res;
        
        for(auto it=m.begin(); it!=m.end(); ++it){
            res.push_back({it->first, it->second});
        }
        
        return res;
        
    }
};

//two pointers

class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        
        int i=0, j=0;
        int ns1 = nums1.size(), ns2=nums2.size();
        
        vector<vector<int>> res;
        
        while(i<ns1 && j<ns2){
            if(nums1[i][0] == nums2[j][0]){
                res.push_back({nums1[i][0], nums1[i][1] + nums2[j][1]});
                i++;
                j++;
            }else if(nums1[i][0] < nums2[j][0]){
                res.push_back({nums1[i][0], nums1[i][1]});
                i++;
            }else{
                res.push_back({nums2[j][0], nums2[j][1]});
                j++;
            }
        }
        
        while(i < ns1){
            res.push_back({nums1[i][0], nums1[i][1]});
            i++;
        }
        
        while(j < ns2){
            res.push_back({nums2[j][0], nums2[j][1]});
            j++;
        }
        
        return res;
        
    }
};