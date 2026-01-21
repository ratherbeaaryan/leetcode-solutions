// Last updated: 1/21/2026, 11:23:46 AM
1class Solution {
2public:
3    string longestPalindrome(string s) {
4        if(s.size()<=1){
5            return s;
6        }
7        int start = 0;
8        int n = s.size();
9        int maxLength = 1;
10
11        for(int i=0;i<s.size();i++){
12            //odd
13            int left = i,right = i;
14            while(left>=0 && right<n && s[left]==s[right]){
15                int currentLength = right - left +1;
16                if(currentLength > maxLength){
17                    maxLength = currentLength;
18                    start = left;
19                }
20                
21                left--;
22                right++;
23                
24
25            }
26            //even
27            left = i,right = i+1;
28            while(left>=0 && right<n && s[left]==s[right]){
29                
30                int currentLength = right - left +1;
31                if(currentLength > maxLength){
32                    maxLength = currentLength;
33                    start = left;
34                }
35                
36                left--;
37                right++;
38
39            }
40            
41
42        }
43        return s.substr(start,maxLength);
44    }
45};