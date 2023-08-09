#include <bits/stdc++.h> 
// Current character se just ussi character ka occurence 
// map meh pehle se updated hai , usse just +1 index meh left
// side ko update karke right - left + 1 ka maximum answer 
// update karna hai...


int uniqueSubstrings(string s)
{
    //Write your code here
    int n = s.length();
    int ans {};
    vector<int>m1(256,-1);

    int left {},right{};

    while(right < n){
        
        if(m1[s[right]]!=-1){
            left = max(left,1+m1[s[right]]);
        }
        //cout << right << " " <<left <<endl;

        m1[s[right]] = right;
        ans = max(ans,right-left+1);
        right++;
    }

    return ans;
}
