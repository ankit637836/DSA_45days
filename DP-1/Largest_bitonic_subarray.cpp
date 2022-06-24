#include<bits/stdc++.h>
using namespace std;

long long M = 1e9 +7;

int* LIS(int* arr,int n){
	int* dp = new int[n];

	dp[0] = 1;
	for(int i=1;i<n;i++){
		dp[i]=1;
		for(int j=i-1;j>=0;j--){
			if(arr[j]>=arr[i]){
				continue;
			}

			int temp = dp[j] + 1;
			dp[i] = max(dp[i],temp);
		}
	}
	return dp;
}
int* R_LIS(int* arr,int n){
	int* dp = new int[n];

	dp[n-1] = 1;
	for(int i=n-2;i>=0;i--){
		dp[i] = 1;
		for(int j=i+1;j<n;j++){
			if(arr[j]>=arr[i]){
				continue;
			}

			int temp = dp[j] + 1;
			dp[i] = max(dp[i],temp);
		}
	}
	
	return dp;
}

void solve(){
	int n;
	cin>>n;

	int* arr = new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int* frwd = LIS(arr,n);
	int* bakw = R_LIS(arr,n);
	
	int mx = 2;
	for(int i=0;i<n;i++){
		mx = max(mx,frwd[i] + bakw[i] -1);
	}

	// for(int i=0;i<n;i++){
	// 	delete [] frwd[i];
	// 	delete [] bakw[i];
	// }
	delete [] arr;
	cout<<mx<<endl;

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
