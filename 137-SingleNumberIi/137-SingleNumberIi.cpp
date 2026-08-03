// Last updated: 8/4/2026, 1:02:13 AM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ones = 0;
        int twos = 0;

        for(int num: nums){
            ones = (num^ones) & ~twos;
            twos = (num^twos) & ~ones;
        }
        return ones;
        
    }
};