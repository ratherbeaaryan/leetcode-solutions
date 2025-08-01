// Last updated: 8/1/2025, 11:40:18 PM
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        if(s==t){
            return true;
        }
        else{
            return false;
        }
        
    }
};