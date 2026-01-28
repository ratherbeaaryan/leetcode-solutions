// Last updated: 1/28/2026, 10:34:30 AM
1class Solution {
2public:
3    int numberOfSubstrings(string s) {
4        int n = s.size();
5        int i = 0;
6        int count = 0;
7        int freq[3];
8
9        for(int j=0;j<n;j++){
10            freq[s[j]-'a']++;
11            while(freq[0] > 0 && freq[1] > 0 && freq[2]>0){
12                count +=n-j;
13                
14                freq[s[i]-'a']--;
15                i++;
16            }
17
18
19        }
20        return count;
21    }
22};