// Last updated: 1/23/2026, 2:51:17 PM
1class Solution {
2public:
3    unordered_map<int, string> belowTen = {
4        {1, "One"}, {2, "Two"},   {3, "Three"}, {4, "Four"}, {5, "Five"},
5        {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
6
7    unordered_map<int, string> belowTwenty = {
8        {10, "Ten"},      {11, "Eleven"},  {12, "Twelve"},  {13, "Thirteen"},
9        {14, "Fourteen"}, {15, "Fifteen"}, {16, "Sixteen"}, {17, "Seventeen"},
10        {18, "Eighteen"}, {19, "Nineteen"}};
11
12    unordered_map<int, string> belowHundred = {
13        {1, "Ten"},   {2, "Twenty"},  {3, "Thirty"}, {4, "Forty"}, {5, "Fifty"},
14        {6, "Sixty"}, {7, "Seventy"}, {8, "Eighty"}, {9, "Ninety"}};
15
16    string numberToWords(int n) {
17
18        if (n == 0)
19            return "Zero";
20
21        if (n < 10) {
22            return belowTen[n];
23        }
24
25        if (n < 20) {
26            return belowTwenty[n];
27        }
28
29        if (n < 100) {
30            string res = belowHundred[n / 10];
31            if (n % 10 != 0)
32                res += " " + belowTen[n % 10];
33            return res;
34        }
35
36        if (n < 1000) {
37            string res = belowTen[n / 100] + " Hundred";
38            if (n % 100 != 0)
39                res += " " + numberToWords(n % 100);
40            return res;
41        }
42
43        if (n < 1000000) {
44            string res = numberToWords(n / 1000) + " Thousand";
45            if (n % 1000 != 0)
46                res += " " + numberToWords(n % 1000);
47            return res;
48        }
49
50        if (n < 1000000000) {
51            string res = numberToWords(n / 1000000) + " Million";
52            if (n % 1000000 != 0)
53                res += " " + numberToWords(n % 1000000);
54            return res;
55        }
56
57        string res = numberToWords(n / 1000000000) + " Billion";
58        if (n % 1000000000 != 0)
59            res += " " + numberToWords(n % 1000000000);
60        return res;
61    }
62};
63