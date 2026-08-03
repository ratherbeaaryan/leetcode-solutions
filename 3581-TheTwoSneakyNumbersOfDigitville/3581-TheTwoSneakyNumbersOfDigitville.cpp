// Last updated: 8/4/2026, 12:54:38 AM
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
    vector<int> result;
    int n = nums.size();
    map<int, int> freq;
    for (int x : nums) freq[x]++;

    for (auto &p : freq)
    if (p.second > 1){
        result.push_back(p.first);
    }

    return result;
        
    }
};