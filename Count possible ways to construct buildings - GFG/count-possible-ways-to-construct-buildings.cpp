//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int TotalWays(int N)
	{
	    // Code here
	    long long int mod=1000000007;
	    vector<long long int> dp;
	    dp.push_back(2);
	    dp.push_back(3);
	    for(int i=2;i<N;i++){
	        dp.push_back((dp[i-1]+dp[i-2])%mod);
	    }
	    return (dp[N-1]*dp[N-1])%mod;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends