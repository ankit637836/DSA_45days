int Solution::largestRectangleArea(vector<int> &arr) {
    stack<int> st;
    int n = arr.size();
    int left[n],right[n];

    //left smallest
    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]>=arr[i]){
            st.pop();
        }
        if(st.empty()){
            left[i] = -1;
        }else{
            left[i] = st.top();
        }

        st.push(i);
    }

    //memory clear
    while(!st.empty()) st.pop();
    //right smallest
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && arr[st.top()]>=arr[i]){
            st.pop();
        }
        if(st.empty()){
            right[i] = n;
        }else{
            right[i] = st.top();
        }

        st.push(i);
    }


    //max area
    int mxArea=-1,area; 
    for(int i=0;i<n;i++){
        area = arr[i]*(right[i]-left[i]-1);
        mxArea = max(area,mxArea);
    }

    return mxArea;

}
