// Last updated: 1/20/2026, 3:48:46 PM
1class Solution {
2public:
3    int search(vector<int>& arr, int target) {
4        int mid, start = 0, end = arr.size() - 1;
5        while (start <= end) {
6            mid = end + (start - end) / 2;
7            if (arr[mid] == target) {
8                return mid;
9            } else if (arr[mid] > arr[start]) {
10                if (target < arr[mid] && target >= arr[start]) {
11                    end = mid - 1;
12
13                } else {
14                    start = mid + 1;
15                }
16            } else {
17                if (target > arr[mid] && target <= arr[end]) {
18                    start = mid + 1;
19
20                } else {
21                    end = mid - 1;
22                }
23            }
24        }
25        return -1;
26    }
27};