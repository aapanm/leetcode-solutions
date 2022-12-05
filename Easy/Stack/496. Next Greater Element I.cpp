//stack solution

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        stack <int> s;
        
        for(int i = 0; i< nums2.size() ; ++i){
            s.push(nums2[i]);
        }
        
        for(int i = 0; i < nums1.size(); ++i){
            int res = Search(s, nums1[i]);
            nums1[i] = res;
        }
        
        return nums1;
    }
    
    int Search(stack <int> s, int target){
        
        int res = INT_MIN;
        
        while(!s.empty()){
            if(s.top() != target){
                if(s.top() > target){
                    res = s.top();
                }
                s.pop();
            }else{
                break;
            }
        }
        
        if(res > target){
            return res;
        }else{
            return -1;
        }
    }
    
};

//stack + hashmap (optimum)

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        stack <int> s;
        unordered_map <int, int> map;
        vector <int> v;
        
        for(int i = 0; i<nums2.size(); ++i){
            
            while(!s.empty() && nums2[i] > s.top()){
                map[s.top()] = nums2[i];
                s.pop();
            }
            s.push(nums2[i]);
        }
        
        for(int i = 0; i < nums1.size(); ++i){
            if(map[nums1[i]]){
                v.push_back(map[nums1[i]]);
            }else{
                v.push_back(-1);
            }
        }
        
        return v;
    }
    
};

//only hasmap

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map <int, int> m;
        
        for(int i=0; i<nums2.size(); ++i){
            m[nums2[i]] = i;
        }
        
        for(int i=0; i<nums1.size(); ++i){
            int curr = m[nums1[i]];
            int mx = -1;
            for(int j=curr+1; j<nums2.size(); ++j){
                if(nums2[j]>nums1[i]){
                    mx = nums2[j];
                    break;
                }
            }
            nums1[i] = mx;
        }
        
        return nums1;
        
    }
};