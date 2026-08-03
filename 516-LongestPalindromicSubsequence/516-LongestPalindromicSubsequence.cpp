// Last updated: 8/4/2026, 12:59:14 AM
class Solution {
public:
int lcs(string s1, string s2, int m, int n) {

        vector<vector<int>> t(m + 1, vector<int>(n + 1, 0));

        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {

                if (s1[i - 1] == s2[j - 1])
                    t[i][j] = 1 + t[i - 1][j - 1];
                else
                    t[i][j] = max(t[i - 1][j], t[i][j - 1]);
            }
        }

        return t[m][n];
    }
    int longestPalindromeSubseq(string s) {
        
        int n = s.size();\
        string rev = s;
        reverse(rev.begin(), rev.end());


        return lcs(s,rev,n,n );
        
    }
};