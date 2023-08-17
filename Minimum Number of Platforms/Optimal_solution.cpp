//Intuition: At first we need to sort both arrays. When the events will be sorted, it will be
// easy to track the count of trains that have arrived but not departed yet. The total platforms
 // needed at one time can be found by taking the difference between arrivals and departures at
 //  that time and the maximum value of all times will be the final answer.


int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    sort(at,at+n);
    sort(dt,dt+n);

    int ans{1}, cnt {1};

    int i{1}, j {};
    while(i<n && j<n){
        if(at[i]<=dt[j]){
            cnt++;
            i++;
        }
        else{
            cnt--;
            j++;
        }
        ans = max(ans,cnt);
    }

    return ans;
}
