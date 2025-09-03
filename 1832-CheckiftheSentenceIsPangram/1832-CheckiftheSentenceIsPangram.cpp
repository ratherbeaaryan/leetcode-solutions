// Last updated: 9/3/2025, 10:01:28 AM
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s = "";
        string e = "";
        for(int i=0;i<word1.size();i++){
            s = s + word1[i];
        }
        for(int j=0;j<word2.size();j++){
            e = e + word2[j];
        }

        
        if(s==e){
            return true;
        }

        return false;
    }
};