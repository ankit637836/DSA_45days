// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




 // } Driver Code Ends
// User function template for C++

class Solution {
public:
    int mySqrt(int x) {
        if(x==0){
            return 0;
        }
        int s=0,e=x-1,mid,ans=0;
        
        while(s<=e){
            mid = s + (e-s)/2;
            mid++;
            if(mid==x/mid){
                return mid;
            }else if(mid>x/mid){
                e = mid-2;
            }else{
                s = mid;
                ans = mid;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}  // } Driver Code Ends
