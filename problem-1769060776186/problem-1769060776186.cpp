// Last updated: 1/22/2026, 11:16:16 AM
1class Solution {
2public:
3    int winner(int n,int k){
4        if(n==1){
5            return 0;
6        }
7        return (winner(n-1,k)+k)%n;
8    }
9    int findTheWinner(int n, int k) {
10        
11        return winner(n,k)+1;
12        
13    }
14};