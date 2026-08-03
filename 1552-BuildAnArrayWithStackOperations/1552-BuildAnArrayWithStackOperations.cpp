// Last updated: 8/4/2026, 12:56:37 AM
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ops;

        stack<int> st;
        int j =0;

        for(int i=1;i<=n;i++){
            ops.push_back("Push");

            if(j < target.size() && i==target[j]){
                j++;
            }
            else{
                ops.push_back("Pop");
            }

            if(j==target.size()){
                break;
            }

        }
        return ops;

        
    }
};