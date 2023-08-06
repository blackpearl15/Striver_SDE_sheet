#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    map<int,int>m1;
    int ans {};

    for(int i=0;i<n;i++){
        m1[arr[i]]++;
    }

    for(int i=0;i<n;i++){
        if(m1.find(arr[i]-1)==m1.end()){
            int a = arr[i];
            int cnt {};
            while(m1[a]>0){
                a++;
                cnt++;
            }
            ans = max(ans,cnt);
        }
    }

    return ans;
}
