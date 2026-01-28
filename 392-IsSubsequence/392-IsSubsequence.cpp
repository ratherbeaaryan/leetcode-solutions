// Last updated: 1/28/2026, 9:56:26 AM
1class Solution {
2public:
3    bool isSubsequence(string s, string t) {
4        int n = s.size();
5        int m = t.size();
6        int i=0;
7        int j=0;
8        while(i<n && j<m){
9            if(s[i] == t[j]){
10                i++;
11            }
12            j++;
13        }
14        return i==n;
15        
16    }
17};