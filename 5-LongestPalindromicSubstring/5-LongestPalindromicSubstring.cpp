// Last updated: 8/25/2025, 2:08:45 PM
class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()<=1){
            return s;
        }
        int start = 0;
        int n = s.size();
        int maxLength = 1;

        for(int i=0;i<s.size();i++){
            //odd
            int left = i,right = i;
            while(left>=0 && right<n && s[left]==s[right]){
                int currentLength = right - left +1;
                if(currentLength > maxLength){
                    maxLength = currentLength;
                    start = left;
                }
                
                left--;
                right++;
                

            }
            //even
            left = i,right = i+1;
            while(left>=0 && right<n && s[left]==s[right]){
                
                int currentLength = right - left +1;
                if(currentLength > maxLength){
                    maxLength = currentLength;
                    start = left;
                }
                
                left--;
                right++;

            }
            

        }
        return s.substr(start,maxLength);
    }
};