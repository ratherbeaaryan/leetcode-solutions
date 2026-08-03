// Last updated: 8/4/2026, 12:59:39 AM
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int m = g.size();
        int n = s.size();
        int l=0;
        int r =0 ;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(l<m && r<n){
            if(s[r] >= g[l] ){
                l=l+1;
            }
            r=r+1;
        }
        return l;
        
    }
};