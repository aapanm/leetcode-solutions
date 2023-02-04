class Solution {
public:
    int numberOfSteps(int num) {
        
        int stps = 0;
        
        while(num){
            cout << num << endl;
            if(num%2 == 0){
                num = num/2;
            }else{
                num-=1;
            }
            stps++;
        }
        return stps;
    }
};