#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
	int n,X,Y;
	cin>>n>>X>>Y;

	string s;
	cin>>s;

	int groups=0;
	// if(s[0]=='0') groups++;
	// for(int i=1;i<s.length();i++){
	// 	if(s[i-1]=='1' && s[i]=='0') groups++;
	// }

	// if(groups==0){
	// 	cout<<"0\n";
	// 	return;
	// }
	for(int i = 1; i < n; i++){
        if(s[i] == '1' && s[i-1] == '0'){
            groups++;
        }
    }
    if(s[n-1] == '0'){
        groups++;
    }

	long long cost = (groups-1)*(min(X,Y)) + Y;
	cout<<cost<<endl;


}
int main() {
	// your code goes here
	int tt;
	//cin>>tt;
	tt=1;
	while(tt--){
	      solve();
	}
	return 0;
}
