int Solution::kthsmallest(const vector<int> &arr, int k){
    int n=arr.size();
    int low = *min_element(arr.begin(), arr.end()); 
    int high = *max_element(arr.begin(), arr.end()); 

    while (low <= high) { 

        int mid = low + (high - low) / 2; 

        int countless = 0, countequal = 0; 
        for (int i = 0; i < n; ++i) { 
            if (arr[i] < mid) 
                ++countless; 
            else if (arr[i] == mid) 
                ++countequal; 
        } 

        if (countless < k and (countless + countequal) >= k) { 
            return mid; 
        } 

        else if (countless >= k) { 
            high = mid - 1; 
        } 

        else if (countless < k and countless + countequal < k) { 
            low = mid + 1; 
        } 
    }
}
