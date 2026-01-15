// Last updated: 1/15/2026, 11:20:35 PM
1class Solution {
2public:
3    int evalRPN(vector<string>& tokens) {
4    stack <int> st;
5    //int n = t.size();
6    int result = 0;
7    int num = 0;
8    for(string &t : tokens){
9        if(t=="+"){
10            int b = st.top();
11            st.pop();
12            int a = st.top();
13            st.pop();
14
15            st.push(a+b);
16
17        }
18        else if(t=="-"){
19            int b = st.top();
20            st.pop();
21            int a = st.top();
22            st.pop();
23
24            st.push(a-b);
25
26        }
27        else if(t=="*"){
28            int b = st.top();
29            st.pop();
30            int a = st.top();
31            st.pop();
32
33            st.push(a*b);
34
35        }
36        else if(t=="/"){
37            int b = st.top();
38            st.pop();
39            int a = st.top();
40            st.pop();
41
42            st.push(a/b);
43
44        }
45        else{
46        st.push(stoi(t));
47        }
48
49        
50
51
52    }
53    return st.top();
54        
55    }
56};