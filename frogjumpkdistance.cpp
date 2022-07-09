// Simran Vedpathak
// Full Comdingbazi
// https://www.youtube.com/watch?v=Kmh3rhyEtB8&list=PLgUwDviBIf0qUlt5H_kiKYaNSqJ81PMMY&index=5
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
vll v(N);
vll dp(N, 0);
ll k;
ll n;
void frogjump(vll v)
{
    // Bottom up
    //  if (ind == 0)return 0;
    //  ll mini = LONG_LONG_MAX;
    //  if (dp[ind] != -1)return dp[ind];
    //  for (int j = 1; j <= k; j++)
    //  {
    //      ll jumps=LONG_LONG_MAX;
    //      if (ind >=j)
    //      {
    //           jumps = frogjump(ind - j, v) + abs(v[ind] - v[ind - j]);

    //     } mini = min(jumps, mini);
    // }
    // return dp[ind] = mini;

    // Tabular method
    for (int ind = 1; ind <n; ind++)
    {
        ll mini = LONG_LONG_MAX;
     for (int j = 1; j < k; j++)
        {
            ll jumps = LONG_LONG_MAX;
            if (ind >= j)
            {
                jumps = dp[ind - j] + abs(v[ind] - v[ind - j]);
            }
            mini=min(jumps,mini);
        }
        dp[ind] = mini;
    }
    cout << dp[n - 1] << '\n';
}
void Letsgo()
{

    cin >> n;
    cin >> k;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    frogjump(v);
}

int main()
{
    FAST;
   ll t=1;
    // cin >> n;
    while (t--)
        Letsgo();
}
