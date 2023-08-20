bool isPossible(int node,vector<int>&color,vector<vector<int>>&mat,
int n,int col){
    for(int k=0;k<n;k++){
       if(k!=node && mat[k][node]==1 && color[k]==col) 
       return false;
    }
    return true;
}


bool solve(int node,vector<int>&color,vector<vector<int>>&mat,int m
,int n){
    if(node==n) return true;

    for(int i=1;i<=m;i++){
        if(isPossible(node,color,mat,n,i)){
            color[node] = i;
            if(solve(node+1,color,mat,m,n)) return true;
            color[node]=0;
        }
    }
    return false;
}


string graphColoring(vector<vector<int>> &mat, int m) {
    // Write your code here
    int n=mat.size();
    vector<int>color(n+1,0);

    return solve(0,color,mat,m,n)==true?"YES":"NO";
}
