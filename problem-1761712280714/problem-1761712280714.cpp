// Last updated: 10/29/2025, 10:01:20 AM
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