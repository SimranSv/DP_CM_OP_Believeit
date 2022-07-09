// Simran Vedpathak
// Full Comdingbazi
//https://www.youtube.com/watch?v=EgG3jsGoPvQ&list=PLgUwDviBIf0qUlt5H_kiKYaNSqJ81PMMY&index=4
#include"bits/stdc++.h"
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
vll dp(N,-1);
int max_adj_sum(ll ind,vll &v){
    if(ind==0)return v[ind];
    if(ind<0)return 0;
    if(dp[ind]!=-1)return dp[ind];
    ll left=v[ind]+max_adj_sum(ind-2,v);
    ll right=0+max_adj_sum(ind-1,v);
    return dp[ind]=max(left,right);
}
void Letsgo()
{
    ll n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>v[i];
    //Tabulation ,Bottom Up.
    ll prev=v[0],prev2=0,curri=0;
    for(int i=1;i<n;i++){
        ll take=v[i];
        if(i>1)take+=prev2;
        ll nottake=prev;
        curri=max(take,nottake);
        prev2=prev;
        prev=curri;    
    }
    //cout<<max_adj_sum(n-1,v);
    cout<<prev<<'\n';
  //  for(int i=0;i<n+1;i++)cout<<dp[i]<<" ";

}

int main()
{
    FAST;
    ll n=1;
    //cin >> n;
    while (n--)
        Letsgo();
}
