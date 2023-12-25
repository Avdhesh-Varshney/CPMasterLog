// https://leetcode.com/problems/gas-station/description/?envType=daily-question&envId=2023-01-07

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum = 0, size = gas.size(), ptr = 0, total_sum = 0;
        for(int i = 0 ; i < size ; i++){
            sum += gas[i] - cost[i];
            total_sum += gas[i] - cost[i];
            if(sum < 0){
                sum = 0;
                ptr = i + 1;
            }
        }
        if(ptr == size or total_sum < 0) return -1;
        return ptr;
    }
};