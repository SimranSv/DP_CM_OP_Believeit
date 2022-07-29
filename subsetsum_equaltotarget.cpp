// Simran Vedpathak
// Full Comdingbazi
#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define pb push_back
#define vll vector<ll>
#define stll set<ll>
#define msgll multiset<ll,greater<>>
#define msll multiset<ll>
#define pll pair<ll, ll>
#define mpll map<ll, ll>
#define vpll vector<pair<ll,ll>>
#define ss second
#define ff first
#define read(n,x) for(ll i=0;i<n;i++){ll k;cin>>k;x.pb(k);}
#define rep(i,j,k) for(ll i=j;i<k;i++)
#define repn(i,j,k) for(ll i=j;i>=k;i--)
#define st(v) sort(v.begin(),v.end())
#define sz(x) (ll)x.size()
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
// O(nxTarget) SpaceComplexity O(nxTarget) 
// bool isposs(vll &v,ll target,  vector<vector<bool>>&dp,int n){
//       for(int i=0;i<n;i++)dp[i][0]=true;
//     dp[0][v[0]]=true;
//     rep(i,1,n){
//      rep(j,1,target+1){
//           bool nottake=dp[i-1][j];
//           bool take=0;
//           if(v[i]<=j)
//           take=dp[i-1][j-v[i]];
//           dp[i][j]=(take|nottake);
//         }
//     }
//   //  
//     for(auto &i:dp){
//         for(auto j:i){
//             cout<<j<<" ";
//         }
//         cout<<'\n';
//     }
//    // cout<<dp[n-1][target];
//     return dp[n-1][target];
    
// }
//O(N*target), space complexity O(n)+O(n*target)

// bool isposs(ll ind,vll &v,ll target,  vector<vll>&dp){
//     if(target==0)return true;
//     if(ind==0)return(v[ind]==target);
//     if(dp[ind][target]!=-1)return dp[ind][target];
//     bool nottake=isposs(ind-1,v,target,dp);
//     bool take=0;
//     if(v[ind]<=target)
//     take=isposs(ind-1,v,target-v[ind],dp);
//     return dp[ind][target]=(take|nottake);
// }

//_______Time Complexity O(n*target) and Space Complexity O(target)
// bool isposs(vll &v,ll target,int n){
//      vector<bool>temp(target+1,false),dp(target+1,false);
//      temp[v[0]]=1,dp[v[0]]=1;
//      
//     dp[0]=1;
//      rep(i,1,n){
    //    dp[0]=1;
//          rep(j,1,target+1){
//              bool nottake=dp[j];
//              bool take=0;
//              if(v[i]<=j){
                
//                   take=dp[j-v[i]];
              
//              }
//              temp[j]=(take|nottake);

//          }
//          dp=temp;
//      }
//      return dp[target];
// }
void Letsgo()
{   
    ll n,target;    
    cin>>n>>target;
    vector<vector<bool>>dp(n,vector<bool> (target,-1));
    vll v;
    read(n,v);
        
     if(isposs(v,target,n))cout<<1<<'\n';
     else cout<<0<<'\n';

   
}
int main()
{
    FAST;
    ll n;
    cin >> n;
    while (n--)Letsgo();
   
}
