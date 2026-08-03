// Last updated: 8/4/2026, 1:01:42 AM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;

        int n = nums.size();
        for(int num:nums){
            freq[num]++;
            if(freq[num]>n/2){
                return num;
            }
        }
        return -1;

             
        
    }
};