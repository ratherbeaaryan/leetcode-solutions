// Last updated: 8/4/2026, 12:57:41 AM
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        stack<int> st;
        int n = pushed.size();
        int j=0;
        for(int x:pushed){
            st.push(x);

            while(!st.empty() && st.top()==popped[j]){
                st.pop();
                j++;
            }

        }

        return st.empty();
    }
};