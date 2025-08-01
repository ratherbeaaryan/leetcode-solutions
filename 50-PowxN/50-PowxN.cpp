// Last updated: 8/1/2025, 11:40:43 PM
class Solution {
 public:
  double myPow(double x, long n) {
    if (n == 0)
      return 1;
    if (n < 0)
      return 1 / myPow(x, -n);
    if (n % 2 == 1)
      return x * myPow(x, n - 1);
    return myPow(x * x, n / 2);
  }
};
