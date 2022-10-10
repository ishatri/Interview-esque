class solution {
  public:
  void solve(int i, int j, int n, string move, vector<string> &ans, vector<vector<int>> &vis,vector<vector<int>> &arr)
  {
    if(i==n-1 && j==n-1)
    {
      ans.push_back(move);
      return;
    }
    
    //(D, L , R, U)
    //downward
    if(i+1<n && !vis[i][j] && vis[i+1][j]==1)
    {
      vis[i][j]=1;
      solve(i+1, j , n , move+ 'D', ans, vis, arr);
      vis[i][j] = 0;
    }
    
    //left
    if(j-1<n && !vis[i][j] && vis[i][j-1]==1)
    {
      vis[i][j]=1;
      solve(i, j-1, n, move + 'L', ans, vis, arr);
      vis[i][j] =0;
    }
    
    //right
    if(j+1>=0 && vis![i][j] && vis[i][j+1]==1)
    {
      vis[i][j]=1;
      solve(i, j+1, n , move+ 'R', ans, vis, arr);
      vis[i][j]=0;
    }
    
    //up
        if(i-1>=0 && !vis[i][j] && m[i-1][j]==1)
        {
             vis[i][j]=1;
            solve(i-1,j, ans, m, n , move + 'U', vis);
            vis[i][j]=0;
        }
        return;
  }
    
   vector<string> findPath(vector<vector<int>> &arr, int n)
   {
     vector<string> ans;
     vector<vector<int>> vis(n , vector<int>(n,0));
     string move ="";
     if(arr[0][0]==1)
     {
       solve(0 ,0, n, move , ans, vis, arr);
     }
    return ans;
  }
       
