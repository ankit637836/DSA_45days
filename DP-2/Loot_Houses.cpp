#include<bits/stdc++.h>
using namespace std;
int M = 1e9 +7;
#define ll long long

int helper(int* a, int n){
	int* dp = new int[n];

	dp[0] = a[0];
	dp[1] = max(a[0],a[1]);

	for(int i=2;i<n;i++){
		dp[i] = max(dp[i-1],dp[i-2]+a[i]);
	}
	int ans = dp[n-1];
	delete [] dp;
	return ans;
}
void solve(){
	int n;
	cin>>n;

	int* a = new int[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int ans = helper(a,n);
	delete [] a;
	cout<<ans<<endl;	
}
int main()
{
	int t;
	//cin >> t;
	t=1;
	while (t--)
	{
		solve();
	}
}
