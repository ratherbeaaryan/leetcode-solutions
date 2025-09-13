// Last updated: 9/13/2025, 5:58:26 PM
class Solution {
public:
    bool isvowel(char ch){
        if(ch=='a'||ch=='o'||ch=='i'||ch=='e'||ch=='u'){
            return true;
        }
        return false;
    }
    int maxFreqSum(string s) {
        int maxc = 0;
        int maxv = 0;


        unordered_map<char,int> freq;
        unordered_map<char,int> freqvow;

        for(char &ch:s){
            if(isvowel(ch)){
                freqvow[ch]++;

                maxv = max(freqvow[ch],maxv);

            }
            if(!isvowel(ch)){
                freq[ch]++;

                maxc = max(freq[ch],maxc);
            }
        }
        return maxc+maxv;
        
    }
};