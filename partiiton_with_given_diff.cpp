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
// s1-s2=d
// s2=s1+d
// totsum-s1=s2
// totsum-s1=s1+d
//(totsum-d)/2=s1
// so now find s1 such that it satisifies (totsum-d)/2

ll isposs(vll v, ll target, int n)
{

    vll dp(target + 1), temp(target + 1);

    
    dp[0] = 1;
    temp[0] = 1;
    rep(i, 0, n)
    {

        rep(j, 0, target + 1)
        {
            ll nottake = dp[j];
            ll take = 0;
            if (v[i] <= j)
            {
                take = dp[j - v[i]];
            }
            temp[j] = take + nottake;
        }
        dp = temp;
    }
    return dp[target];
}
void Letsgo()
{
    ll n, d;
    cin >> n >> d;
    vll v;
    read(n, v);
    ll sum = 0;
    rep(i, 0, n) sum += v[i];
    if (sum - d >= 0 && (sum - d) % 2 == 0)
    {
        cout << isposs(v, (sum - d)/2, n) << '\n';
    }
    else
    {
    }
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
}
