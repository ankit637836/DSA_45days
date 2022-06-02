// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




 // } Driver Code Ends
// User function template for C++class Solution {
private:
    int getCount(vector<int> &matrix , int m){
        int mid,s=0,e=matrix.size()-1;
        
        while(s<=e){
            mid = (e-s)/2 + s;
            
            if(matrix[mid]<=m){
                s = mid+1;
            }else{
                e = mid-1;
            }
        }
        return s;
    }
    
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        
        int s = matrix[0][0],e=matrix[n-1][n-1]+1,mid,count;
        
        while(s<e){
            mid = (e-s)/2 + s;
            count=0;
            for(int i=0;i<n;i++){
                count += getCount(matrix[i],mid);
            }
            if(count<k){
                s = mid+1;
            }else{
                e = mid;
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
