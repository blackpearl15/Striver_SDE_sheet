#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
  int n = arr.size();
  int maxi{}, a{};

  map<int,int>m1;

  for(int i=0;i<n;i++){
    a += arr[i];

    if(a == 0)
      maxi = max(maxi,i+1);
      
    if(m1.find(a)!=m1.end()){
        int b = m1[a];
        maxi = max(maxi,i+1 - b);
    }
    else{
      m1[a]=i+1;
    }
  }

  return maxi;

}
