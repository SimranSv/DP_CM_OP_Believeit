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
            res = (res * a);
        a = (a * a);
        b = b >> 1;
    }
    return res;
}
ll isposs(vector<int> &v, int n, ll sum)
{
    vector<bool> dp(sum + 1), temp(sum + 1);

  
    rep(i, 0, n)
    {  
        dp[0] = 1;

        rep(j, 0, sum + 1)
        {

            bool nottake = dp[j];
            bool take = 0;
            if (v[i] <= j)
            {
                take = dp[j - v[i]];
            }
            temp[j] = (take | nottake);
        }
        dp = temp;
    }

    ll mini = mod;
    for (int i = 0; i <= sum / 2; i++)
    {
        if (dp[i] && dp[sum - i])
            mini = min(mini, (sum - i) - i);
    }
    return mini;
}
int minSubsetSumDifference(vector<int>& arr, int n)
{
    ll sum=0;
	rep(i,0,n)sum+=arr[i];
      ll k=isposs(arr,n,sum);
    if(n==1)return arr[0];
     if(k==mod){
         return 0;
        
    }else return k;
        
    
}