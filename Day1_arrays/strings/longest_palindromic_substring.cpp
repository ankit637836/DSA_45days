string Solution::longestPalindrome(string A) {

    if(A.size()==1){
        return A;
    }
    string s1="",ans="";
    int j,k,mx=0;
    for(int i=1;i<A.size()-1;i++){
        j=i-1,k=i+1;
        stack<char> st;
        while(j>=0 && k<A.size()){
            if(A[j]==A[k]){
                st.push(A[j]);
                j--;
                k++;
            }else{
                break;
            }
        }
        if(st.size()>mx){
            mx = st.size();
        }
    }
    if(mx==0){
        char ch = A[0];
        string s = "";
        s += ch;
        ch = A[1];
        s += ch;
        return s;
    }
    for(int i=1;i<A.size()-1;i++){
        j=i-1,k=i+1;
        stack<char> st;
        while(j>=0 && k<A.size()){
            if(A[j]==A[k]){
                st.push(A[j]);
                j--;
                k++;
            }else{
                break;
            }
        }
        if(st.size()==mx){
            while(!st.empty()){
                s1 += st.top();
                st.pop();
            }
            ans += s1;
            reverse(s1.begin(),s1.end());
            ans += A[i];
            ans +=  s1;

            return ans;
        }
    }
    return ans;
}
