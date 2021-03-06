class Solution {
public:
    int numWays(int n) {
        dp[0] = dp[1] = 1;
        for(int i=2; i<=n; i++)
        {
            dp[i] = max(dp[i], dp[i-1]+dp[i-2]) % 1000000007;
        }
        return dp[n];
    }
private:
    int dp[100000];
};
