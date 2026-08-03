// Last updated: 8/4/2026, 12:58:30 AM
class Solution {
public:
bool isPrime(int n) {
    if (n <= 1) return false;      // 0 and 1 are not prime
    if (n == 2) return true;       // 2 is prime
    if (n % 2 == 0) return false;  // eliminate even numbers

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}
    int countPrimeSetBits(int left, int right) {
        int result = 0;

        for(int i=left;i<=right;i++){
            int count = __builtin_popcount(i);

            if(isPrime(count)){
                result++;
            }
        }
        return result;


        
    }
};