// Last updated: 8/4/2026, 1:00:36 AM
class Solution {
public:
    unordered_map<int, string> belowTen = {
        {1, "One"}, {2, "Two"},   {3, "Three"}, {4, "Four"}, {5, "Five"},
        {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};

    unordered_map<int, string> belowTwenty = {
        {10, "Ten"},      {11, "Eleven"},  {12, "Twelve"},  {13, "Thirteen"},
        {14, "Fourteen"}, {15, "Fifteen"}, {16, "Sixteen"}, {17, "Seventeen"},
        {18, "Eighteen"}, {19, "Nineteen"}};

    unordered_map<int, string> belowHundred = {
        {1, "Ten"},   {2, "Twenty"},  {3, "Thirty"}, {4, "Forty"}, {5, "Fifty"},
        {6, "Sixty"}, {7, "Seventy"}, {8, "Eighty"}, {9, "Ninety"}};

    string numberToWords(int n) {

        if (n == 0)
            return "Zero";

        if (n < 10) {
            return belowTen[n];
        }

        if (n < 20) {
            return belowTwenty[n];
        }

        if (n < 100) {
            string res = belowHundred[n / 10];
            if (n % 10 != 0)
                res += " " + belowTen[n % 10];
            return res;
        }

        if (n < 1000) {
            string res = belowTen[n / 100] + " Hundred";
            if (n % 100 != 0)
                res += " " + numberToWords(n % 100);
            return res;
        }

        if (n < 1000000) {
            string res = numberToWords(n / 1000) + " Thousand";
            if (n % 1000 != 0)
                res += " " + numberToWords(n % 1000);
            return res;
        }

        if (n < 1000000000) {
            string res = numberToWords(n / 1000000) + " Million";
            if (n % 1000000 != 0)
                res += " " + numberToWords(n % 1000000);
            return res;
        }

        string res = numberToWords(n / 1000000000) + " Billion";
        if (n % 1000000000 != 0)
            res += " " + numberToWords(n % 1000000000);
        return res;
    }
};
