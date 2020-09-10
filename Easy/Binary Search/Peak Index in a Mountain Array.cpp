class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int max = INT_MIN;
        int i;
        for(i = 0; i < arr.size(); ++i){
            if(arr[i] > max){
                max = arr[i];
            }else{
                break;
            }
        }
        return i-1;
    }
};
