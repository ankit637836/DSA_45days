#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int a[], int n, long long s)
    {
        // Your code here
        int st=0,en=0,sum=a[0];
        
        if(sum==s) return {1,1};
        
        while(en<n-1){
            if(sum+a[en+1] ==s){
                en++;
                return {st+1,en+1};
            }else if(sum+a[en+1]<s){
                sum += a[en+1];
                en++;
            }else{
                sum -= a[st];
                st++;
                if(sum==s){
                    return {st+1,en+1};
                }
            }
        }
        
        return {-1};
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
