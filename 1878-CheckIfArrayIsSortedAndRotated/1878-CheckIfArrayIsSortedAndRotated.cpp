// Last updated: 8/1/2025, 11:39:32 PM
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