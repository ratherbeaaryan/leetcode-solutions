// Last updated: 10/14/2025, 11:05:21 AM
class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        k=k%size(arr);
        reverse(begin(arr),end(arr));
        reverse(begin(arr),begin(arr)+k);
        reverse(begin(arr)+k,end(arr));
    }
};