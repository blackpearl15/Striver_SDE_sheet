#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
        int ele{}, cnt{}, c{};
        for (int i = 0; i < n; i++) {

          if (cnt == 0)
            ele = arr[i];

          if (ele == arr[i])
            cnt++;

          else
            cnt--;
		}

		for(int i=0;i<n;i++)
		   if(ele==arr[i]) c++;
        
		if(c>n/2)
		return ele;


		return -1;
}
