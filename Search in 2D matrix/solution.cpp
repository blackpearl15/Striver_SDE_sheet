bool searchMatrix(vector<vector<int>>& mat, int target) {
  
  int n = mat.size();
  int m = mat[0].size();
  
  int i{}, j {m-1};

  while(i<n && j>=0){
      if(mat[i][j]==target)
         return true;

      if(mat[i][j]<target)
        i++;

      else 
        j--; 
  }

  return false;
}
