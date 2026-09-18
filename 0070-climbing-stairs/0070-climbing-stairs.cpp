class Solution {
public:
    int solveRec(int n) { // same as fibonacci series just make the code
                             // optimise beacuse without that itb will give tel
                             // and we need to optimise it with dp

        // base case
        if (n < 0) {
            return 0;
        }
        if (n == 0) {
            return 1;
        }
        int ans = solveRec(n - 1) + solveRec(n - 2);
        return ans;
    }

    int solveMem(int n, vector<int>& dp) {
        if (n < 0) {
            return 0;
        }
        if (n == 0) {
            return 1;
        }
        if (dp[n] != -1) {
            return dp[n];
        }

        return dp[n] = solveMem(n - 1, dp) + solveMem(n - 2, dp);
    }
    int solveTab(int n) {
        if (n == 0)
            return 1;

        vector<int> dp(n + 1, 0);
        dp[0] = 1;
        dp[1] = 1;

        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];

    }
     int climbStairs(int n) {
        return solveTab(n);   // yahan tabulation use ho raha hai (sabse optimized)
    }
};