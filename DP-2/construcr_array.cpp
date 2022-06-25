/*
ques link: https://www.hackerrank.com/challenges/construct-the-array/problem
*/long M = 1e9 +7;
long countArray(int n, int k, int x) {
    // Return the number of ways to fill in the array.
    long oneC = 1;
    long nonOneC = 0;
    
    for(int i=1;i<n;i++){
        long prevC = oneC;
        oneC = (nonOneC*(k-1))%M;
        nonOneC = (prevC + (nonOneC*(k-2))%M)%M;
    }
    if(x==1) return oneC;
    else return nonOneC;
}
