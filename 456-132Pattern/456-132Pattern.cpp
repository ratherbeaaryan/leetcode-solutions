// Last updated: 8/4/2026, 12:59:36 AM
class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size();
        int num3 = INT_MIN;
        stack<int> st;

        for(int i = n-1;i>=0;i--){
            if(nums[i] < num3){
                return true;
            }

            while(!st.empty() && nums[i] > st.top()){
                num3 = st.top();
                st.pop();

            }
            st.push(nums[i]);
        }
        return false;
        
    }
};