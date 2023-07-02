#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int n = matrix.size();
	int m = matrix[0].size();
	vector<int>v1(n,-1),v2(m,-1);
	for(int i=0;i<matrix.size();i++){
		for(int j=0;j<matrix[i].size();j++){
			if(matrix[i][j]==0){
               v1[i]=0;
			   v2[j]=0;           
            }
		}
	}

	

	for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
			   if(v1[i]==0 || v2[j]==0)
			    matrix[i][j]=0;
			     
		   
	   }
	}

}
