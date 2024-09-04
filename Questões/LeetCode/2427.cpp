class Solution {
public:
    int commonFactors(int a, int b) {
        int mdc = gcd(a, b);
        int result = 0;

        for(int i = 1; i <= mdc; i ++){
            if(a % i == 0 && b % i == 0) result++;
        }

        return result;
    }
};