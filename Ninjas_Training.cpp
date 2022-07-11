// Simran Vedpathak
// Full Comdingbazi
//https://www.codingninjas.com/codestudio/problems/ninja-s-training_3621003?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0
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

int Ninjas_Training(vector<vector<ll>> &v,vector<vector<ll>> &dp, ll days, ll task)
{
    if (days < 0)
    {
       return 0;
    }
    if(task<3&&dp[days][task]!=0)return dp[days][task];
    ll maxi=0;
    ll mini=0;
    for(int i=0;i<3;i++){
        if(task!=i){
           maxi=v[days][i] +Ninjas_Training(v,dp,days-1,i);
           mini=max(maxi,mini);
        }

    }
    return dp[days][task]=mini;
}
void Letsgo()
{
    ll n;
    cin >> n;
    vector<vector<ll>> v(n+1, vector<ll>(4)),dp(n+1, vector<ll>(4));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <3; j++)
        {
            cin >> v[i][j];
        }
    }
   cout<<Ninjas_Training(v,dp, n - 1, 3)<<'\n';
}

int main()
{
    FAST;
    ll n = 1;
     cin >> n;
    while (n--)
        Letsgo();
}
