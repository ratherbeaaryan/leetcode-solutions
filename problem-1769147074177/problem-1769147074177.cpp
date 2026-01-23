// Last updated: 1/23/2026, 11:14:34 AM
1class Solution {
2public:
3    int kthGrammar(int n, int k) {
4        if(n==1 && k==1){
5            return 0;
6        }
7        int length = pow(2,n-1);
8        int mid = length/2;
9
10        if(k<=mid){
11            return kthGrammar(n-1,k);
12
13        }
14        else{
15            return !kthGrammar(n-1,k-mid);
16        }
17        
18    }
19};