// Simran Vedpathak
// Full Comdingbazi
// https://www.youtube.com/watch?v=EgG3jsGoPvQ&list=PLgUwDviBIf0qUlt5H_kiKYaNSqJ81PMMY&index=4
#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define pb push_back
#define vll vector<ll>
#define mpll map<ll, ll>
#define ss second
#define ff first
#define no cout << "No\n";
#define yes cout << "Yes\n";
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

const ll mod = 1e9 + 7;
const ll N = 4e5 + 10;
ll expo(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a);
        a = (a * a);
        b = b >> 1;
    }
    return res;
}

ll n, m;
// ll mini(ll row, ll column, vector<vector<ll>> &grid, vector<vector<ll>> &dp)
// {
//     if(column==0&&row==0)return grid[0][0];
//     if(row<0||column<0)return mod;
//     if(dp[row][column])return dp[row][column];
//     ll up=grid[row][column]+mini(row-1,column,grid,dp);
//     ll left=grid[row][column]+mini(row,column-1,grid,dp);
//    // cout<<up<<" "<<left<<'\n';
//     return dp[row][column]=min(up,left);
// }
void Letsgo()
{

    cin >> n >> m;
    vector<vector<ll>> grid(n, vector<ll>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];
    }
    //___TC=O(n*m) and Space complexity =O(m);
    // 1  3  6
    // 5  8  10
    // 12 16 19
    // vll dp(m);

    // for (int i = 0; i < n; i++)
    // {
    //     vll temp(m);
    //     for (int j = 0; j < m; j++)
    //     {
    //         if (i == 0 && j == 0)
    //         {
    //            // temp(m);
    //             temp[0] = grid[0][0];
    //             continue;
    //         }
    //         if (i == 0 && j > 0)
    //         {
    //             temp[j] = temp[j - 1] + grid[i][j];
    //             continue;
    //         }
    //         if (j == 0)
    //         {
    //             temp[j] = dp[j] + grid[i][j];
    //             continue;
    //         }

    //         if (j > 0)
    //         {
    //             temp[j] += min(dp[j] + grid[i][j], temp[j - 1] + grid[i][j]);
    //         }
    //     }
    //     dp = temp;
    // }
    // cout << dp[m - 1] << '\n';

    // cout<<mini(n - 1, m - 1, grid, dp)<<'\n';
    // cout<<'\n';
}

int main()
{
    FAST;
    ll n = 1;
    cin >> n;
    while (n--)
        Letsgo();
}
