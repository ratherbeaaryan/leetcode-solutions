// Last updated: 8/4/2026, 12:57:01 AM
class Solution {
public:
int t[1001][1001];
int lcs(string &s1 , string &s2, int n,int m){
    if(n==0 || m== 0){
        return 0;
    }
    if(t[n][m] != -1){
        return t[n][m];
    }
    if(s1[n-1] == s2[m-1]){
        return t[n][m] = 1+lcs(s1,s2,n-1,m-1); 
    }
    else{
        return t[n][m] = max(lcs(s1,s2,n-1,m),lcs(s1,s2,n,m-1));
    }

}
    int longestCommonSubsequence(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        memset(t,-1,sizeof(t));
        
        return lcs(s1,s2,n,m);

        
        

        
        
    }
};