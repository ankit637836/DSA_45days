int Solution::strStr(const string A, const string B) {
    int n = A.size(),m=B.size(),ans = -1;
    for(int i=0;i<n;i++){
        int j = 0,k = i;
        while(A[k]==B[j]){
            if(j==m-1){
                return i;
            }
        j++;
        k++;
        }
    }
    return ans;
}
