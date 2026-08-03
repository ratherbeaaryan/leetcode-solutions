// Last updated: 8/4/2026, 1:00:39 AM
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        //int n = nums.size();
        int answ =0;
        for(int x:nums){
            answ^= x;
        }

        unsigned int mask = (unsigned int)answ & -(unsigned int)answ;
        int n1 =0;
        int n2 =0;
        for(int x:nums){
            if(x & mask){
                n1 ^= x;

            }
            else{
                n2 ^= x;
            }
        }
        return {n1,n2};

    }
};