// Last updated: 10/31/2025, 3:13:47 PM
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