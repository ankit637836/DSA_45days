// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




 // } Driver Code Ends
// User function template for C++

class Solution {
public:
    int searchInsert(vector<int>& a, int b) {
        int n = a.size();
        
        int s=0,e=n-1,mid;
        
        while(s<=e){
            mid = (e-s)/2 + s;
            
            if(a[mid]==b){
                return mid;
            }else if(a[mid]>b){
                e = mid-1;
            }else{
                s = mid+1;
            }
        }
        return s;
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
