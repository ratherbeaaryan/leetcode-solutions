// Last updated: 9/7/2025, 8:56:37 AM
class Solution {
public:
    bool halvesAreAlike(string s) {
            int n = s.size();
            int j = n/2;
            int i =0;
            int cleft = 0;
            int cright =0;
            while(i<n/2 && j<n){
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                    cleft++;

                }if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U'){
                    cright++;

                }
                i++;
                j++;
            }
            if(cleft == cright){
                return true;
            }
            return false;
               

    }
};