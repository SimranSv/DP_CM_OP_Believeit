// Simran Vedpathak
// Full Comdingbazi
// https://www.codingninjas.com/codestudio/problems/maze-obstacles_977241?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos
int mazeObstacles(int n, int m, vector< vector<int> > &mat) {
         vector<ll> dp(m, 0);

    for (int i = 0; i < n; i++)
    {
        vector<ll> temp(m, 0);
        for (int j = 0; j < m; j++)
        {
        if(mat[i][j]==-1){temp[j]=0;continue;}
            if (i == 0 && j == 0)
                temp[j] = 1;
            else
            {

                if (i > 0)
                    temp[j] = dp[j];
                if (j > 0)
                    temp[j] =(temp[j]%mod+ temp[j - 1]%mod)%mod;
           
            }
        }
        dp = temp;
    }
    return dp[m-1]%mod;
}
