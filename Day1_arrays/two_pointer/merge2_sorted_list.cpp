void Solution::merge(vector<int> &A, vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
        int i=0,j=0;
        int m=A.size();
        int n=B.size();
        int k=0;
        int r[m+n];
        while(i<m && j<n){
            if(A[i]<=B[j]){
                r[k]=A[i];
                k++;
                i++;
            }else{
                r[k]=B[j];
                k++;
                j++;
            }

        }
        while(i<m){
            r[k]=A[i];
            k++;
            i++;
        }
         while(j<n){
            r[k]=B[j];
            k++;
            j++;
        }

        A.clear();
        for(i=0;i<(m+n);i++){
            A.push_back(r[i]);
        }
    
}
