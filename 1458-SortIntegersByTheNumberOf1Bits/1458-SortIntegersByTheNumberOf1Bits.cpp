// Last updated: 8/4/2026, 12:56:51 AM
class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        int n = arr.size();

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if ((__builtin_popcount(arr[j]) >
                        __builtin_popcount(arr[j + 1])) ||
                    ((__builtin_popcount(arr[j]) ==
                     __builtin_popcount(arr[j + 1])) &&
                        arr[j] > arr[j + 1])) {
                swap(arr[j], arr[j + 1]);
            }
                else {
                    continue;
                }
            }
        }
        return arr;
    }
};