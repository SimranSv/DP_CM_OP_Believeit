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
#define rep(i, j, k) for (ll i = j; i < k; i++
#define st(v) sort(v.begin(), v.end())
#define sz(x) (ll) x.size()
#define no cout << "No\n";
#define yes cout << "Yes\n";
//DP with top down approach

// int just_for_fun(string s,string t,int n,int m,vector<vector<int>>&dp){
    // 
    // if(n<0||m<0)return 0;
    // if(dp[n][m]!=-1)return dp[n][m];
    // if(s[n]==t[m])
//    return  dp[n][m]=1+ just_for_fun(s,t,n-1,m-1,dp);
    // return dp[n][m]= max(just_for_fun(s,t,n-1,m,dp),just_for_fun(s,t,n,m-1,dp));
// }
// int lcs(string s, string t)
// {
    // 
	// int n=sz(s),m=sz(t);
    // vector<vector<int>>dp(n,vector<int> (m,-1));
    // return just_for_fun(s,t,n-1,m-1,dp);
        // 
// }

//Iterative approach

// int just_for_fun(string &s,string &t,int n,int m,vector<vector<int>>&dp){
    // int n1,m1;
    // n1=n,m1=m;
    // 
    // 
    // for(int n1=1;n1<n+1;n1++){
        // for(int m1=1;m1<m+1;m1++){
            //   if(s[n1-1]==t[m1-1])dp[n1][m1]=1+ dp[n1-1][m1-1];
            //  else dp[n1][m1]= max(dp[n1][m1-1],dp[n1-1][m1]);
            // 
            // 
        // }
    // }
    // return dp[n][m];
// }

// 1D dp
// int just_for_fun(string &s,string &t,int n,int m){
    // int n1,m1;
    // n1=n,m1=m;
    // vector<int>prev(m+1),curr(m+1);
    // 
    // 
    // for(int n1=1;n1<n+1;n1++){
        // for(int m1=1;m1<m+1;m1++){
            //   if(s[n1-1]==t[m1-1]){curr[m1]=1+ prev[m1-1];}
            //  else curr[m1]= max(curr[m1-1],prev[m1]);
            // 
            // 
        // }
        // prev=curr;
    // }
    // return curr[m];
// }
