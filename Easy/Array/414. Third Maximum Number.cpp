class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        map <int, int> m;
        
        for(auto i : nums) m[i]++;
        
        int max = INT_MIN;
        int i = 0;
        
        for(auto it = m.rbegin(); it!= m.rend(); it++, i++){
            if(i == 0) max = it->first;
            if(i == 2){
                max = it->first;
                break;
            }
        }
        
        return max;
        
    }
};