#include<bits/stdc++.h>
using namespace std;
long long M = 1e9 +7;

int helper(int** a, int n, int m){
	int** dp = new int*[n];
	for(int i=0;i<n;i++){
		dp[i] = new int[m];
	}
	dp[n-1][m-1] = 1;

	dp[n-1][m-2] = 1;
	dp[n-2][m-1] = 1;
	for(int i=n-3;i>=0;i--){
		dp[i][m-1] = max(1,dp[i+1][m-1] - a[i+1][m-1]);
	}

	for(int i=m-3;i>=0;i--){
		dp[n-1][i] = max(1,dp[n-1][i+1] - a[n-1][i+1]);
	}

	int case1,case2;
	for(int i=n-2;i>=0;i--){
		for(int j=m-2;j>=0;j--){
			case1 = dp[i+1][j]-a[i+1][j];
			case2 = dp[i][j+1]-a[i][j+1];
			if(case1<0 || case2<0){
				dp[i][j] = 1;
			}else{
				dp[i][j] = min(case1,case2);
			}
		}
	}
	int ans = max(1,dp[0][0]);
	for(int i=0;i<n;i++){
		delete [] dp[i];
	}
	delete [] dp;
	return ans;
}

void solve(){
	int row,col;
	cin>>row>>col;

	int** arr = new int*[row];
	for(int i=0;i<row;i++){
		arr[i] = new int[col];
		for(int j=0;j<col;j++){
			cin>>arr[i][j];
		}
	}

	int ans = helper(arr,row,col);
	for(int i=0;i<row;i++){
		delete [] arr[i];
	}
	delete [] arr;

	cout<<ans<<endl;
}
int main()
{
	int t;
	cin >> t;
	//t=1;
	while (t--)
	{
		solve();
	}
}
