class Solution {
public:
    int searchInsert(vector<int>& a, int b) {
        int n = a.size();
        
        int s=0,e=n-1,mid;
        
        while(s<=e){
            mid = (e-s)/2 + s;
            
            if(a[mid]==b){
                return mid;
            }else if(a[mid]>b){
                e = mid-1;
            }else{
                s = mid+1;
            }
        }
        return s;
    }
};
