//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ll long long
// 	ll mod = 1000000007;
// 	ll func(int n){
// 	    if(n==1){
// 	        return 2;
// 	    }
// 	    if(n==2){
// 	        return 3;
// 	    }
// 	    return func(n-1)+func(n-2);
// 	}
	ll countStrings(int n) {
	    // code here
	   // ll ans=0;
	   // ans = func(n);
	   // return ans%mod
	   ll mod=1000000007;
	   vector<ll> dp;
	   dp.push_back(2);
	   dp.push_back(3);
	   for(int i=2;i<n;i++){
	       dp.push_back((dp[i-1]+dp[i-2])%mod);
	   }
	   return dp[n-1]%mod;
	   
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends