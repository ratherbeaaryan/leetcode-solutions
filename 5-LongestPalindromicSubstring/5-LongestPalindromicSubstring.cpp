// Last updated: 8/22/2025, 12:25:14 AM
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n <= 1) {
            return s;
        }

        int start = 0;
        int maxLength = 1;

        for (int i = 0; i < n; i++) {
            // Expand for odd length palindromes (e.g., "aba")
            int left = i, right = i;
            while (left >= 0 && right < n && s[left] == s[right]) {
                int currentLength = right - left + 1;
                if (currentLength > maxLength) {
                    maxLength = currentLength;
                    start = left;
                }
                left--;
                right++;
            }

            // Expand for even length palindromes (e.g., "abba")
            left = i, right = i + 1;
            while (left >= 0 && right < n && s[left] == s[right]) {
                int currentLength = right - left + 1;
                if (currentLength > maxLength) {
                    maxLength = currentLength;
                    start = left;
                }
                left--;
                right++;
            }
        }
        return s.substr(start, maxLength);
    }
};