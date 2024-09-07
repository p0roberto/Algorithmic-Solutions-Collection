class Solution {
public:
    vector<int> dp;

    Solution() : dp(38, -1) {
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;
    }
    int trib(int n){
        if(dp[n] != -1) return dp[n];
        dp[n] = trib(n-1) + trib(n-2) + trib(n-3);
        return dp[n];
    }

    int tribonacci(int n) {
        return trib(n);
    }
};