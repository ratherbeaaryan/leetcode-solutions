// Last updated: 9/7/2025, 9:19:16 AM
class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n = word1.length();
        int m = word2.length();
        vector<int> freq1(26);
        vector<int> freq2(26);
        if(n!=m){
            return false;
        }
        for(int i=0;i<n;i++){
            char ch = word1[i];
            int index = ch-'a';
            freq1[index]++;
        }
        for(int i=0;i<m;i++){
            char ch = word2[i];
            int index2 = ch-'a';
            freq2[index2]++;
        }
        for(int i=0;i<26;i++){
            if(freq1[i]!=0 && freq2[i]!=0){
                continue;
            }
             if(freq1[i]==0 && freq2[i]==0){
                continue;
            }
            
                return false;

        
            
        }
        sort(begin(freq1),end(freq1));
        sort(begin(freq2),end(freq2));

        if(freq1==freq2){
            return true;
        }
        return false;
        
    }
};