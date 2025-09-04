// Last updated: 9/4/2025, 3:13:22 PM
class Solution {
public:
    int appendCharacters(string s, string t) {
        int i= 0 ;
        int j =0;
        while (i<s.length() && j<t.length()){
            if(s[i] == t[j]){
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        
        return t.length() -j;
    }
};