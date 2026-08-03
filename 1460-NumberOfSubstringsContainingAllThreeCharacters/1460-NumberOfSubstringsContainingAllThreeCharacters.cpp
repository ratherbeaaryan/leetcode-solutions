// Last updated: 8/4/2026, 12:56:48 AM
class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int i = 0;
        int count = 0;
        int freq[3];

        for(int j=0;j<n;j++){
            freq[s[j]-'a']++;
            while(freq[0] > 0 && freq[1] > 0 && freq[2]>0){
                count +=n-j;
                
                freq[s[i]-'a']--;
                i++;
            }


        }
        return count;
    }
};