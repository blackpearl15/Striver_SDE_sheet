#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int n = arr.size();
    int ele1{}, ele2, c1{}, c2 {};

    for(int i=0;i<n;i++){
        if(arr[i]==ele1) c1++;
        else if(ele2==arr[i]) c2++;

        else if(c1==0){
            ele1=arr[i];
            c1=1;
        }
        else if(c2==0){
            ele2=arr[i];
            c2=1;
        }
        else{
            c1--;
            c2--;
        }
    }
    vector<int>ans;
    int cnt1{}, cnt2 {};

    for(int i=0;i<n;i++){
        if(ele1==arr[i]) cnt1++;
        else if(ele2==arr[i]) cnt2++;
    }

    if(cnt1 >n/3) ans.push_back(ele1);
    if(cnt2 >n/3) ans.push_back(ele2);

    return ans;
}
