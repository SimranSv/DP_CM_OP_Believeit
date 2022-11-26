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


const ll mod = 1e9 + 7;
const ll N = 1e6 + 10;
long countWaysToMakeChange(int *v, int n, int value)
{
    ll k,cleft;
    k=n;
    cleft=value;
    vector<vector<ll>>dp(n,vector<ll>(value+1));
    
    
 for(int i=0;i<=value;i++){
      if(i%v[0]==0)dp[0][i]=1;
 }
 for(int i=1;i<k;i++){
     dp[i][0]=1;
     for(int j=1;j<=cleft;j++){
         ll take=0;
         ll nottake=dp[i-1][j];
         if(v[i]<=j){
             take=dp[i][j-v[i]];
         }
         dp[i][j]=take+nottake;
     }
 }
return dp[n-1][cleft];
}