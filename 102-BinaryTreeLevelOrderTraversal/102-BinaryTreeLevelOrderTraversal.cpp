// Last updated: 1/20/2026, 3:28:59 PM
1class Solution {
2public:
3    vector<int> searchRange(vector<int>& arr, int target) {
4        int n = arr.size();
5        int start = 0;
6        int end = n-1;
7        int first = -1;
8        int last = -1;
9        int mid;
10        int ar[2];
11        while(start<=end){
12            mid = end +(start-end)/2;
13            if(arr[mid]==target){
14                first = mid;
15                end = mid-1;
16
17            }
18            else if(arr[mid]>target){
19                end = mid -1;
20            }
21            else{
22                start = mid+1;
23            }
24        }
25
26
27        start =0;
28        end = n-1;
29        while(start<=end){
30            mid = end +(start-end)/2;
31            if(arr[mid]==target){
32                last = mid;
33                start = mid+1;
34
35            }
36            else if(arr[mid]>target){
37                end = mid -1;
38            }
39            else{
40                start = mid+1;
41            }
42        }
43        vector<int> a(2);
44        a[0]=first;
45        a[1]=last;
46        return a;
47    }
48};