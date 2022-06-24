#include<bits/stdc++.h>
using namespace std;

long long M = 1e9 +7;
int helper(int a[],int n){
	int* out = new int[n+1] {0};

	out[0] = 1;
	out[1] = 1;

	for(int i=2;i<=n;i++){
		out[i] = out[i-1];
		if(a[i-2]*10 + a[i-1] <=26){
			out[i] = (out[i]+out[i-2])%M;
		}
	}
	int ans = out[n];
	delete [] out;
	return ans;
}

void solve(){
	string s;
	cin>>s;

	int n = s.length();
	int a[n] = {};
	for(int i=0;i<n;i++){
		a[i] = s[i]-'0';
	}
	int ans = helper(a,n);
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
