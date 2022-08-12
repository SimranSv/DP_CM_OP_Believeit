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
// // O(nxTarget) SpaceComplexity O(nxTarget) 
// int isposs(vector<int> &v,ll target, vector<vector<ll>>&dp,int n){
//     rep(i,0,n){
//         dp[i][0]=1;
//     }
//     if(v[0]<=target){
//         dp[0][v[0]]=1;
//     }
//     rep(i,1,n){
//         rep(j,0,target+1){
//         ll nottake=dp[i-1][j];
//         ll take=0;
//             if(v[i]<=j){
//                 take=dp[i-1][j-v[i]];
                
//             }
//             dp[i][j]=take+nottake;
//         }
//     }
//     return dp[n-1][target];
  
  
    
// }
// // O(nxTarget) SpaceComplexity O(Target) 

// void isposs(vll v, ll target, int n)
// {
//     vll dp(target + 1), temp(target + 1);

//     if (v[0] <= target)
//     {
//         dp[v[0]] = 1;
//     }
//here is a edge case of 0 0 0 x
//if you will declare dp[0] and temp of temp[0] in for loop the anwer wld be 1 but the expected answer is 4
//So declare it outside
//         dp[0] = 1;
//         temp[0] = 1;

//     rep(i, 1, n)
//     {

//         rep(j, 0, target + 1)
//         {
//             ll nottake = dp[j];
//             ll take = 0;
//             if (v[i] <= j)
//             {
//                 take = dp[j - v[i]];
//             }
//             temp[j] = take + nottake;
//         }
//         dp = temp;
//     }
//     rep(i, 0, target + 1)
//     {
//         cout << dp[i] << " ";
//     }
//     cout << '\n';
// }

void Letsgo()
{
    ll n, target;
    cin >> n >> target;
    vector<vector<ll>> dp(n, vector<ll>(target + 1));
    vll v;
    read(n, v);

    isposs(v, target, n);
}
int main()
{
    FAST;
    ll n;
    cin >> n;
    while (n--)
        Letsgo();
}
