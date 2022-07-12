// Simran Vedpathak
// Full Comdingbazi
// https://www.codingninjas.com/codestudio/problems/total-unique-paths_1081470?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0
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

// int grid_paths(ll column, ll row, vector<vector<ll>> &dp)
// {
//     if (column == 0 && row == 0)
//     {
//         return 1;
//     }

//     if (column < 0 || row < 0)
//         return 0;
//     if (dp[column][row])
//         return dp[column][row];

//     ll left = grid_paths(column - 1, row,dp);
//     ll right = grid_paths(column, row - 1,dp);
//     return dp[column][row]= left + right;
// }
void Letsgo()
{

    cin >> m >> n;
    //__________Tabulation____________
    // vector<vector<ll>> dp(m, vector<ll>(n));
    // dp[0][0] = 1;
    // ll left = 0, up = 0;
    // cout << grid_paths(n - 1, m - 1, dp) << '\n';
    // for (int i = 0; i < m; i++)
    // {
    //     left = 0, up = 0;
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i == 0 && j == 0)
    //             continue;
    //         else
    //         {
    //             if (j > 0)
    //             {
    //                 left = dp[i][j - 1];
    //             }
    //             if (i > 0)
    //             {
    //                 up = dp[i - 1][j];
    //             }
    //         }
    //         dp[i][j] = left + up;
    //     }
    // }
    // cout << dp[m - 1][n - 1] << '\n';

    //______________Space Optimization and Tabulation__________
    vector<ll> dp(n, 0);

    for (int i = 0; i < m; i++)
    {
        vector<ll> temp(n, 0);
        for (int j = 0; j < n; j++)
        {
            if (i == 0 && j == 0)
                temp[j] = 1;
            else
            {

                if (i > 0)
                    temp[j] += dp[j];
                if (j > 0)
                    temp[j] += temp[j - 1];
           
            }
        }
        dp = temp;
    }
    cout <<dp[n-1]<<'\n';
}

int main()
{
    FAST;
    ll n = 1;
    cin >> n;
    while (n--)
        Letsgo();
}
