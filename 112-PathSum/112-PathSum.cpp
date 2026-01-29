// Last updated: 1/29/2026, 10:41:58 PM
1class Solution {
2public:
3    int climbStairs(int n) {
4        if( n==1||n==2 || n==3){
5            return n;
6        }
7        vector<int> t(n+1);
8        
9
10        t[0] = 0;
11        t[1] = 1;
12        t[2] = 2;
13
14        for(int i=3;i<=n;i++){
15            t[i] = t[i-1] + t[i-2];
16        }
17        return t[n];
18        
19    }
20};