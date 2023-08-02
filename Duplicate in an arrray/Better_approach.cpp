
//Optimal still to learn from Floyd’s Tortoise and Hare Approach
//Link : https://www.codingninjas.com/studio/problems/find-duplicate-in-array_1112602?topList=striver-sde-sheet-problems&leftPanelTab=2

#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n) {
  // Write your code here.
  for(int i=0;i<n;i++){
	  int ind = abs(arr[i]) - 1;

	  arr[ind] *= -1;
                                    
	  if(arr[ind] > 0)
	      return abs(arr[i]);


	 
  }

  return -1;
  

}

