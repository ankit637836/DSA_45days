#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int sum=INT_MIN,maxsum=INT_MIN;
        int c=0;
        for(int i=0;i<n;i++){
            if(arr[i]<0) c++;
            
            maxsum = max(maxsum,arr[i]);
        }
        if(c==n) return maxsum;
        
        maxsum = 0,sum=0;
        
        for(int i=0;i<n;i++){
            sum += arr[i];
            if(sum>maxsum){
                maxsum = sum;
            }else if(sum<0){
                sum = 0;
            }
        }
        
        return maxsum;
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends
