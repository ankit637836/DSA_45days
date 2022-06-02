string Solution::solve(string A) {
    stack<string> st;
    string s1="";
    char em = ' ';
    for(int i=0;i<A.size();i++){
        if(A[i]==em){
            if(s1!=""){
                st.push(s1);
            }
            s1 = "";
        }else{
            s1 += A[i];
        }
    }
    if(s1!=""){
        st.push(s1);
    }
    s1 = "";
    while(!st.empty()){
        s1 += st.top();
        st.pop();
        s1 += " ";
    }
    if (!s1.empty()) {
        s1.pop_back();
    }

    return s1;
}
