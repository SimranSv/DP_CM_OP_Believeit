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
vll v(N);
vll dp(N);
void Letsgo()
{
    // Tabular Form
    //     ll n;
    //     cin>>n;
    //     for(int i=0;i<n;i++)cin>>v[i];

    //    for(int i=1;i<n;i++){
    //        ll left=dp[i-1]+abs(v[i]-v[i-1]);
    //        ll right=LONG_LONG_MAX;
    //        if(i>1){
    //            right=dp[i-2]+abs(v[i]-v[i-2]);
    //        }
    //        dp[i]=min(left,right);

    //    }
    //    cout<<dp[n-1]<<'\n';

    // Space Optimization
    ll n;
    cin >> n;
    vll v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    ll prev = 0, curr = 0, prev2 = 0;
    for (int i = 1; i < n; i++)
    {

        ll left = prev + abs(v[i] - v[i - 1]);
        ll right = LONG_LONG_MAX;
        if (i > 1)
        {
            right = prev2 + abs(v[i] - v[i - 2]);
        }
        curr = min(left, right);
        prev2 = prev;
        prev = curr;
    }
    cout << prev << '\n';
}

int main()
{
    FAST;
    ll n = 1;
    // cin >> n;
    while (n--)
        Letsgo();
}
