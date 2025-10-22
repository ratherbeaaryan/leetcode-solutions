// Last updated: 10/22/2025, 9:41:30 PM
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
    stack <int> st;
    //int n = t.size();
    int result = 0;
    int num = 0;
    for(string &t : tokens){
        if(t=="+"){
            int b = st.top();
            st.pop();
            int a = st.top();
            st.pop();

            st.push(a+b);

        }
        else if(t=="-"){
            int b = st.top();
            st.pop();
            int a = st.top();
            st.pop();

            st.push(a-b);

        }
        else if(t=="*"){
            int b = st.top();
            st.pop();
            int a = st.top();
            st.pop();

            st.push(a*b);

        }
        else if(t=="/"){
            int b = st.top();
            st.pop();
            int a = st.top();
            st.pop();

            st.push(a/b);

        }
        else{
        st.push(stoi(t));
        }

        


    }
    return st.top();
        
    }
};