// Last updated: 9/2/2025, 2:42:36 AM
class Solution {
public:
    int strStr(string s1, string s2) {
        int n = s2.size();
        int k = s1.size();
        if(n==1 && k==1){
            if(s1[0]==s2[0]){
                return 0;
            }
        }
        
        for (int i = 0; i <= k - n; i++) {
            for (int j = 0; j <= n; j++) {
                

                if (s1[i + j] != s2[j]) {
                    break;
                }

                if (j == n - 1) {
                    return i;
                }
            }
        }
        return -1;
    }
};