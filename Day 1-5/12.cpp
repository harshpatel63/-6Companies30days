class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        long long dp[N+1];
        dp[0] = 0;
        for(long long i = 1;i<N+1;i++)
            dp[i] = dp[i-1] + (i*i);
        return dp[N];
    }
};