// Last updated: 8/4/2026, 1:01:07 AM
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        set<int> res;
        int n= nums.size();

        for(int num:nums){
            freq[num]++;
            if(freq[num]>n/3){
                res.insert(num);
            }
        }

        vector<int> v(res.begin(),res.end());
        return v;
        
    }
};