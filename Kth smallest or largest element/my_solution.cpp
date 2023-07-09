#include<bits/stdc++.h>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	// Write your code here.
	vector<int>v;
    int i {};
    priority_queue<int>pq;
	while(i<n){
		pq.push(arr[i]);
		if(pq.size() > k){
			pq.pop();
	}
		i++;
	}
	//cout << pq.top() << endl;
	int a = pq.top();
	v.push_back(a);

	priority_queue<int , vector<int> , greater<int>>pq1;

	i = 0;
	while(i<n){
		pq1.push(arr[i]);
		if(pq1.size() > k){
			pq1.pop();
		}
		i++;
	}
	a = pq1.top();

	v.push_back(a);

	
	

	return v;
}
