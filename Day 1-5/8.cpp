class Solution {
	public:
		int CountWays(string str){
		    int n = str.size();
		    long long dp[n+1] = {0};
		    dp[0] = 1;
		    dp[1] = 1;
		    if(str[0] == '0') return 0;
		    long long mod = 1000000007;
		    for(int i = 2;i<n+1;i++) {
		        if(str[i-1]>'0') {
		            dp[i] = dp[i-1];
		        }
		        
		        int temp = str[i-1] - '0' + (str[i-2] - '0')*10;
		        if(temp >= 10 and temp<=26) {
		            dp[i] = (dp[i]%mod+dp[i-2]%mod)%mod;
		        }
		        if(temp == 0) return 0;
		    }
		    return (int) dp[n];
		}

};