// Last updated: 1/15/2026, 11:17:13 PM
1class Solution {
2public:
3    vector<string> buildArray(vector<int>& target, int n) {
4        vector<string> ops;
5
6        stack<int> st;
7        int j =0;
8
9        for(int i=1;i<=n;i++){
10            ops.push_back("Push");
11
12            if(j < target.size() && i==target[j]){
13                j++;
14            }
15            else{
16                ops.push_back("Pop");
17            }
18
19            if(j==target.size()){
20                break;
21            }
22
23        }
24        return ops;
25
26        
27    }
28};