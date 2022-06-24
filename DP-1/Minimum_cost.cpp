#include<bits/stdc++.h>
using namespace std;
long long M = 1e9 +7;

int min_cost(int** a, int n, int m){
	int ** dp = new int*[n];
	for(int i=0;i<n;i++){
		dp[i] = new int[m];
	}
	dp[n-1][m-1] = a[n-1][m-1];

	for(int i=n-2;i>=0;i--){
		dp[i][m-1] = dp[i+1][m-1] + a[i][m-1];
	}

	for(int i=m-2;i>=0;i--){
		dp[n-1][i] = dp[n-1][i+1] + a[n-1][i];
	}

	for(int i=n-2;i>=0;i--){
		for(int j=m-2;j>=0;j--){
			dp[i][j] = a[i][j] + min(dp[i+1][j],min(dp[i+1][j+1],dp[i][j+1]));
		}
	}
	int ans = dp[0][0];
	for(int i=0;i<n;i++){
		delete [] dp[i];
	}
	delete [] dp;
	return ans;
}

int min_cost2(int** a, int si, int sj, int ei, int ej) {
	if (si == ei && sj == ej) {
		return a[ei][ej];
	}
	if (si > ei || sj > ej) {
		return INT_MAX;
	}
	int option1 = min_cost2(a, si + 1, sj, ei, ej);
	int option2 = min_cost2(a, si + 1, sj + 1, ei, ej);
	int option3 = min_cost2(a, si, sj + 1, ei, ej);
	return a[si][sj] + min(option1, min(option2, option3));
}

void solve(){
	int n,m;
	cin>>n>>m;

	int** a = new int*[n];
	for(int i=0;i<n;i++){
		a[i] = new int[m];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}

	int ans = min_cost(a,n,m);
	int ans2 = min_cost2(a,0,0,n,m);
	for(int i=0;i<n;i++){
		delete [] a[i];
	}
	delete [] a;
	cout<<ans<<endl;
	cout<<ans2<<endl;

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
