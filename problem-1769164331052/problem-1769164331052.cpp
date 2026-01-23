// Last updated: 1/23/2026, 4:02:11 PM
1class Solution {
2public:
3    void solve(int curr , int n, vector<int> &result){
4        if(curr > n){
5            return;
6        }
7        result.push_back(curr);
8
9        for(int append =0;append<=9;append++){
10            int newnum = curr*10 + append;
11
12            if(newnum > n){
13                return;
14            }
15
16             solve(newnum,n,result);
17        }
18       
19    }
20    vector<int> lexicalOrder(int n) {
21        vector<int> result;
22
23        for(int startnum = 1; startnum<=9;startnum++){
24            solve(startnum,n,result);
25        }
26
27        return result;
28        
29        
30    }
31};