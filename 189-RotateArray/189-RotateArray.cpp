// Last updated: 8/1/2025, 11:40:22 PM
class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        k=k%size(arr);
        reverse(begin(arr),end(arr));
        reverse(begin(arr),begin(arr)+k);
        reverse(begin(arr)+k,end(arr));
    }
};