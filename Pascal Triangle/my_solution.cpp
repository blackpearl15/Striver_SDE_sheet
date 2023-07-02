#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>>ans;

  ans.push_back({1});
  if(n==1)
  return ans;

  ans.push_back({1,1});
  if(n==2)
  return ans;

  for(int i=1;i<n-1;i++){
    vector<long long int>v;
    v.push_back(1);
    for(int j=0;j<ans[i].size()-1;j++){
        v.push_back(ans[i][j]+ans[i][j+1]);
    }
    v.push_back(1);
    ans.push_back(v);
  }

  return ans;
}

