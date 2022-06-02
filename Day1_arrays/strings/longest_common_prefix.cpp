string Solution::longestCommonPrefix(vector<string> &A) {
    string s1="";
    for(int i = 0; i < A[0].length(); ++i){
        for(int s = 1; s < A.size(); ++s){
            if(A[0][i] != A[s][i])
                return s1;
        }
        s1 += A[0][i];
    }

    return s1;
}
