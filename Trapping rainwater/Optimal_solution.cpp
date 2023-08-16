long long getTrappedWater(long long* arr, int n) {
    // Write your code here.
    //Intution based on min(leftmax,rightmax) - arr[i];
    //Example : 0 1 0 2 1 0 1 3 2 1 2 1
    // Dry run to form clear concept
    
    int l{}, r{n - 1}, ltmax{}, rtmax{}, res{};
    while(l<=r){
        if(arr[l]<=arr[r]){
            if(arr[l]>=ltmax) ltmax = arr[l];
            else res +=(ltmax-arr[l]);
            l++;
        }
        else{
            if(arr[r]>=rtmax) rtmax = arr[r];
            else res += (rtmax-arr[r]);
            r--;
        }
    }

    return res;
}
