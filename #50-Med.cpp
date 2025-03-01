class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1;  // Base case
        
        if (n < 0) {  
            if (n == INT_MIN) { 
                return (1 / x) * myPow(x, n + 1);  // Handle INT_MIN safely
            }
            x = 1 / x;  
            n = -n;  // Now safe to negate
        }

        double half = myPow(x, n / 2);
        return (n % 2 == 0) ? half * half : half * half * x;
    }
};
