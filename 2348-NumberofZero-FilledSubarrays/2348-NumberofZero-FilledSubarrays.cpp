// Last updated: 8/19/2025, 10:00:58 AM
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long answer = 0;
        int zerocount = 0;
        for(int n:nums){
            if(n==0){
                zerocount ++;
            }
            else{
                zerocount = 0;
            }
            answer += zerocount;
        }
        return answer;


        
    }
};