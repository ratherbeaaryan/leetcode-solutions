// Last updated: 10/14/2025, 11:01:14 AM
class Solution {
public:
    bool check(vector<int>& arr) {
        int n = arr.size();
        int drop;
        if(n==1)return true;
        
        for (int i = 1; i < n; i++) {
            if (arr[i] < arr[i - 1]) {
                drop++;
            }}
            if (drop == 0)
                return true;
            if (drop == 1 && arr[0] >= arr[n - 1])
                return true;
            
        
        return false;
    }
};