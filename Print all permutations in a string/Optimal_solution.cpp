#include <bits/stdc++.h>


void solve(int ind,string s,vector<string>&ans){
    
    if(ind==s.length()){
        ans.push_back(s);
        return;
    }
       
    for(int i=ind;i<s.length();i++){
        swap(s[ind],s[i]);
        solve(ind+1,s,ans);
        swap(s[ind],s[i]);
    }
}

vector<string> findPermutations(string &s) {
    // Write your code here.
    vector<string>ans;
    solve(0,s,ans);
    return ans;
}
