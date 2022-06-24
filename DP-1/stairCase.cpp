#include<bits/stdc++.h>
using namespace std;

long long M = 1e9 +7;

void solve(){
	int n;
	cin>>n;

	int* arr = new int[n+1];

	arr[0]=1;
	arr[1]=1;
	arr[2]=2;

	for(int i=3;i<=n;i++){
		arr[i] = arr[i-1] + arr[i-2] + arr[i-3];
	}
	int ans = arr[n];
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
