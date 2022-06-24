#include<bits/stdc++.h>
using namespace std;
long long M = 1e9 +7;
int helper(int V, int arr[], int n, int** dp){
	if(V==0){
		return 1;
	}

	if(V<0){
		return 0;
	}

	if(n==0){
		return 0;
	}

	if(dp[V][n]!=-1){
		return dp[V][n];
	}
	int first = helper(V-arr[0],arr,n,dp);
	int second = helper(V,arr+1,n -1,dp);
	dp[V][n] = first + second;
	return first + second;
}

void solve(){
	int n;
	cin>>n;

	int arr[n];

	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int V;
	cin>>V;
	int** dp = new int*[V+1];
	for(int i=0;i<=V;i++){
		dp[i] = new int[n+1];
		for(int j=0;j<=n;j++){
			dp[i][j] = -1;
		}
	}
	
	int ans = helper(V,arr,n,dp);
	for(int i=0;i<=V;i++){
		delete [] dp[i];
	}
	delete [] dp;
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
