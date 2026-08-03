// Last updated: 8/4/2026, 1:00:12 AM
class Solution {
public:

    bool isvowel(char t){
        if(t=='A'||t=='E'||t=='I'||t=='O'||t=='U'||t=='a'||t=='e'||t=='i'||t=='o'||t=='u'){
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int n = s.size();
        int j=n-1;
        int i=0;
       while(i<j){
            if(isvowel(s[i]) && isvowel(s[j])){
                swap(s[i],s[j]);
                j--;
                i++;
            }
            else if(!isvowel(s[i])){
                if(!isvowel(s[j])){
                    i++;
                    j--;
                }
                else{
                    i++;
                }
            }
            else if(!isvowel(s[j])){
                if(!isvowel(s[i])){
                    i++;
                    j--;
                }
                else{
                    j--;
                }
            }
        }

        return s;
        
        
    }
};