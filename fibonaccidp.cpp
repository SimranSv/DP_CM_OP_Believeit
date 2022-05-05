#include "bits/stdc++.h"
using namespace std;
#define ll long long
int solve(ll k,vector<ll>&dp)
{
    if(k<=1)return k;
    if(dp[k]!=-1)return dp[k];
    else return dp[k]=solve(k-1,dp)+solve(k-2,dp);

}
int main()
{
    int t;
    t = 1;
    ll k;
    cin>>k;
    vector<ll>dp(k+1,-1);
   // cin >> t;
    while (t--)
        solve(k,dp);
       // for(auto &i:dp)cout<<i<<" ";
         cout<<dp[k]<<'\n';
}