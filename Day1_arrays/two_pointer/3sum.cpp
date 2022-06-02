int Solution::threeSumClosest(vector<int> &A, int B) {
    sort(A.begin(),A.end());

    int i=0;
    int sum,minDiff = INT_MAX;
    int s,e,temp,dif;
    while(i<A.size()-2){
        s = i+1;
        e = A.size()-1;

        while(s<e){
            temp = A[i] + A[s] + A[e];
            dif = abs(temp-B);

            if(dif==0){
                return B;
            }

            if(dif<minDiff){
                minDiff = dif;
                sum = temp;
            }

            if(temp<B) s++;
            else e--;
        }
        i++;
    }
    return sum;
}:
