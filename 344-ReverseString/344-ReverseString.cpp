// Last updated: 8/1/2025, 11:40:06 PM
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size()-1;
        int l=0,r=n;
        while(l<=r){
            swap(s[l],s[r]);
            l++;
            r--;

        }

        
    }
};