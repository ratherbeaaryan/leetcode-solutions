// Last updated: 9/4/2025, 3:11:17 PM
class Solution {
public:
    int appendCharacters(string s, string t) {
        int n = s.size();
        int m = t.size();
        int i = 0;
        int j =0;
        int append = m;

        while(i<n && j<m){
        if(s[i]==t[j]){
            append--;
            i++;
            j++;

        }
        if(s[i]!=t[j]){
            i++;
        }
        }
        return append;

        
    }
};