#include<bits/stdc++.h>
using namespace std;

long long M = 1e9 +7;

int LIS(int* arr,int n){
	int* dp = new int[n];

	dp[0] = 1;
	for(int i=1;i<n;i++){
		dp[i] = 1;
		for(int j=i-1;j>=0;j--){
			if(arr[j]>arr[i]){
				continue;
			}

			int temp = dp[j] + 1;
			dp[i] = max(dp[i],temp);
		}
	}
	int ans = 0;
	for(int i=0;i<n;i++){
		ans = max(ans,dp[i]);
	}
	
	delete [] dp;
	return ans;
}

void solve(){
	int n;
	cin>>n;

	int* arr = new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int ans = LIS(arr,n);
	delete [] arr;
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
