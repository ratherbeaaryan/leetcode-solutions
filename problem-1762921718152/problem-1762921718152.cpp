// Last updated: 11/12/2025, 9:58:38 AM
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        stack<int>st;
        vector<int> nge(n);
        for(int i = 2*n-1; i>=0;i--){
            int ind = i%n;
            int currEle = nums[ind];

            while(!st.empty() && st.top() <= currEle){
                st.pop();
            }

            if(i<n){
                if(!st.empty()){
                    nge[i] = st.top();
                }
                else{
                    nge[i] = -1;
                }


            }

            st.push(currEle);

        }

        return nge;
    }
};