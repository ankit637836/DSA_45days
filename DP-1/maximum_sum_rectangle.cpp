#include<bits/stdc++.h>
using namespace std;
long long M = 1e9 +7;

int kadane_sum(int* temp,int n){
	int sum=0,max_sum=INT_MIN;
	for(int i=0;i<n;i++){
		sum += temp[i];
		if(sum>max_sum) max_sum = sum;

		if(sum<0) sum=0;
	}
	return max_sum;

}
int helper(int** a, int n, int m){
	int ans = INT_MIN;
	for(int st=0;st<m;st++){
		int* temp = new int[n]();
		for(int en=st;en<m;en++){
			for(int i=0;i<n;i++){
				temp[i] += a[i][en];
			}
			ans = max(ans,kadane_sum(temp,n));
		}
	}
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
	//cin >> t;
	t=1;
	while (t--)
	{
		solve();
	}
}
