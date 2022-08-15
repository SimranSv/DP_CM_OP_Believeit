// Simran Vedpathak
// Full Comdingbazi
#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define pb push_back
#define vll vector<ll>
#define stll set<ll>
#define msgll multiset<ll, greater<>>
#define msll multiset<ll>
#define pll pair<ll, ll>
#define mpll map<ll, ll>
#define vpll vector<pair<ll, ll>>
#define ss second
#define ff first
#define read(n, x)             \
    for (ll i = 0; i < n; i++) \
    {                          \
        ll k;                  \
        cin >> k;              \
        x.pb(k);               \
    }
#define rep(i, j, k) for (ll i = j; i < k; i++)
#define repn(i, j, k) for (ll i = j; i >= k; i--)
#define st(v) sort(v.begin(), v.end())
#define sz(x) (ll) x.size()
#define no cout << "No\n";
#define yes cout << "Yes\n";
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

const ll mod = 1e9 + 7;
const ll N = 2e5 + 10;
ll expo(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b = b >> 1;
    }
    return res;
}
ll wt;
// O(nxw) space complexity O(n)+O(nxw)
//  ll isposs(vll &v, ll sum, vll &val, int n, vector<vll> &dp)
//  {

//     if (n ==0)
//     {
//        if(v[0]<=sum)return val[0];
//        else return 0;
//     }

//     if (dp[n][sum] != -1)
//         return dp[n][sum];
//     ll nottake = isposs(v, sum, val, n - 1, dp);
//     ll take = -mod;
//     if (v[n] <= sum)
//         take = val[n] + isposs(v, sum - v[n], val, n - 1, dp);
//     return dp[n][sum] = max(take, nottake);
// }

// // Letsgo for tabulation
// ll isposstabu(vll &v, ll sum, vll &val, int n, vector<vll> &dp)
// {
//    rep(i, v[0], sum+1)dp[0][i] = val[0];
    
//     rep(i, 1, n)
//     {
//         rep(j, 0, sum + 1)
//         {
//             ll nottake = dp[i - 1][j];
//             ll take = 0;
//             if (v[i] <= j)
//             {
//                 take = val[i] + dp[i - 1][j - v[i]];
                
//             }
//             dp[i][j] = max(take, nottake);
//         }
//     }
//     return dp[n-1][sum];
// }
// Letsgo for tabulation and Space optimization
// ll isposstabuspace(vll &v, ll sum, vll &val, int n, vector<vll> &dp)
// {
//     rep(i, v[0], sum+1)dp[i] = val[0];
    
//     rep(i, 1, n)
//     {
//         for(int j=sum;j>=0;j--)
//         {
//             ll nottake = dp[j];
//             ll take = 0;
//             if (v[i] <= j)
//             {
//                 take = val[i] + dp[j - v[i]];
                
//             }
//             dp[j] = max(take, nottake);
//         }
//     }
//     return dp[sum];
// }

void Letsgo()
{
    vll v, val;

    ll n;
    cin >> n;

    read(n, v);
    read(n, val);
    cin >> wt;
    vector<vll> dp(n, vll(wt + 1));
    cout << isposstabu(v, wt, val, n, dp);
}

int main()
{
    FAST;
    ll n = 1;
    ll q;
    cin >> q;
    while (q--)
    {
        Letsgo();
    }
    // Never be an Introvert
}
