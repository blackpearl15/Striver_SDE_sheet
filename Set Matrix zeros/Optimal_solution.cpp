/*
    Time Complexity: O(N * M * (N + M)) 
    Space Complexity:O(N * M) 

    Where N & M are dimensions of the given matrix.
*/

void setZeros(vector<vector<int>> &matrix)
{
	// Storing dimensions of matrix in n and m.
	int n = matrix.size();
	int m = matrix[0].size();
	
	// Declaring isZero boolean matrix.
	vector<vector<bool>> isZero(n,vector<bool>(m));
	
	// Traversing the original matrix.
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			
			// If that element of the matrix is equal to 0.
			if(matrix[i][j] == 0) {
				
				// Traversing its complete column and setting all the isZero values to be true.
				for(int k = 0; k < n; k++) {
					isZero[k][j] = true;
				}
				
				// Traversing its complete row and setting all the isZero values to be true.
				for(int k = 0; k < m; k++) {
					isZero[i][k] = true;
				}
			}
		}
	}
	
	// Travrsing isZero and if isZero at an index is true then we replace that element with zero in original matrix.
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(isZero[i][j]) {
				matrix[i][j] = 0;
			}
		}
	}
}
