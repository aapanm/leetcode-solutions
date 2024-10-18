class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        vector<int> result;

        for(int i=0; i<gas.size(); ++i){
            if(gas[i] >= cost[i]){
                result = isCircuit(i, gas, cost);
                if(result[0]) return result[1];
                else{
                    if(result[1] < i){
                        break;
                    }else{
                        i = result[1];
                    }
                }
            }
        }

        return -1;
    }

    vector<int> isCircuit(int startPoint, vector<int>g, vector<int> c){
        int i = startPoint;
        int gas = g[i];

        while(gas >= c[i]){
            gas-=c[i++];
            if(i == g.size()) i = 0;
            if(i == startPoint) return {1, startPoint};
            gas+=g[i];
        }

        return {0, i};
    }
};