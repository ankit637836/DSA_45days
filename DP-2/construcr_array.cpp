long M = 1e9 +7;
long countArray(int n, int k, int x) {
    // Return the number of ways to fill in the array.
    long oneC = 1;
    long nonOneC = 0;
    int arr[n];
    arr[0] = 1;
    arr[n-1] = x;
    for(int i=1;i<n;i++){
        long prevC = oneC;
        oneC = (nonOneC*(k-1))%M;
        nonOneC = (prevC + (nonOneC*(k-2))%M)%M;
    }
    if(x==1) return oneC;
    else return nonOneC;
}
