class Solution {
    public int[] countBits(int n) {
         int[] dp = new int[n+1];
        
        dp[0] = 0;
        int nearest = 0;
        for (int k = 1; k <= n; k++) {
            if ((k & (k-1)) == 0) {
                dp[k] = 1;
                nearest = k;
            } else {
                dp[k] = dp[k-nearest] + dp[nearest];
            }
        }
        
        return dp;
    }
}
