#include<bits/stdc++.h>
using namespace std;
int M = 1e9 +7;
#define ll long long
ll nBST(int n , int* dp = new int[1001]()){

	if(n==0 || n==1){
		return 1;
	}

	if(dp[n]>0){
		return dp[n];
	}
	ll cnt=0;
	for(int i=1;i<=n;i++){
		ll left = nBST(i-1,dp)%M;
		dp[i-1] = left;
		ll right = nBST(n-i,dp)%M;
		dp[n-i] = right;
		
		cnt += (left*right)%M;
	} 
	dp[n] = cnt%M;
	int ans = dp[n];
	delete [] dp;
	return ans;

}
void solve(){
	int n;
	cin>>n;

	int ans = (nBST(n))%M;
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
