#include <bits/stdc++.h>

bool isPal(string &s,int start,int end){
    
    while(start<end){
        if(s[start]!=s[end])
          return false;
        start++;
        end--;
    }

    return true;
}

void solve(int ind,string s,vector<string>&v,
vector<vector<string>>&ans){

    if(ind==s.length()){
        ans.push_back(v);
        return;
    }

    for(int i=ind;i<s.length();i++){
       if(isPal(s,ind,i)){
           v.push_back(s.substr(ind,i-ind+1));
           solve(i+1,s,v,ans);
           v.pop_back();
       }
    }
}


vector<vector<string>> partition(string &s) 
{
    // Write your code here.
    vector<string>v;
    vector<vector<string>>ans;
    solve(0,s,v,ans);
    return ans;
}
