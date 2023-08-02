#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	// 1   2   3   4   5   6
	//001 010 011 100 101 110

	// 1   3   3   4   5   6
	//001 011 011 100 101 110

	//2 ^ 3
	//010 ^ 011 = 001

	//001 & ~(000)
	//001 & 111 : 001

	//
    int a{}, b{}, c{}, cnt{};

    for(int i=0;i<n;i++){
		a = a ^ arr[i];
	}

	for(int i=1;i<=n;i++){
		a = a ^ i;
	}

	int set_bit = a & ~(a - 1);

	for(int i=0;i<n;i++){
		if(arr[i] & set_bit) b = b ^ arr[i];
		else c = c ^ arr[i];
	}

	for(int i=1;i<=n;i++){
        if(i & set_bit) b = b ^ i;
		else c = c ^ i;
	}

	//cout << b << " " << c << endl;

	for(int i=0;i<n;i++){
		if(arr[i]==b) cnt++;
	}

	if(cnt==0) return {b,c};
	else  return {c,b};
	
}

