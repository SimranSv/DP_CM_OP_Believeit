// Simran Vedpathak
// Full Comdingbazi

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
const ll N = 1e6 + 10;
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

vll dp(N);
//Recursion__memoisation TC=O(N),SC O(N)
//ll ans,ans1;
// ll Letsgo(ll q)
// {
//     //if(q<0)return 0;
//     ll ans=0;
//     if(q==0)return 1;
//     if(dp[q])return dp[q];
    
//     for(int i=1;i<=6;i++)if(q-i>=0)ans=(ans+Letsgo(q-i))%mod;
//    // cout<<ans<<" ";
//       return dp[q]=ans;

   
// }


int main()
{
    FAST;
    ll n = 1;
    ll q;
    cin>>q;  
    //Tabulation__Time Complexity O(N)
    // dp[0]=1;
    // for(int i=1;i<=q;i++){
    //     for(int j=1;j<=6;j++){
    //        if(i-j>=0){
    //            dp[i]=(dp[i]+dp[i-j])%mod;
    //        } 
    //     }

    // }
    cout<<dp[q]<<'\n';
   
}
