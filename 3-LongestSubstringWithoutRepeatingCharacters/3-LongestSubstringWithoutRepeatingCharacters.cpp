// Last updated: 8/22/2025, 11:52:17 PM
class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        vector<bool> count(256, 0);
        int first = 0;
        int second = 0;
        int len = 0;
        while (second < s.size()) {
            // repeating char
            while (count[s[second]]) {
                count[s[first]] = 0;
                first++;
            }
            count[s[second]] = 1;
            len = max(len, second - first + 1);
            second++;
        }
        return len;
    }
};