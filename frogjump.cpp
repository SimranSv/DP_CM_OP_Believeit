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

int frogjump(ll ind,vll v){
    if(ind ==0){
    return 0;
    }
    if(dp[ind]!=-1)return dp[ind];
    ll left=frogjump(ind-1,v)+abs(v[ind]-v[ind-1]);
    ll right=LONG_LONG_MAX;
    if(ind>1){
         right=frogjump(ind-2,v)+abs(v[ind]-v[ind-2]);
    }
    return dp[ind]=min(left,right);


}
//O(n) time complexity Space Complexity O(1)
// void Letsgo()
// {
//     cin >> n;
//     read(n, v);
//     ll prev = 0, prev1 = 0, curr = 0;
//     rep(i, 1, n)
//     {
//         ll pr = prev + abs(v[i] - v[i - 1]);
//         ll mar = LONG_LONG_MAX;
//         if (i > 1)
//         {
//             mar = prev1 + abs(v[i] - v[i - 2]);
//         }
//         curr = min(pr, mar);

//         prev1 = prev;
//         prev = curr;
//     }
//     cout<<prev;
// }


//O(n) space complexity and time complexity O(n)

// void Letsgo()
// {
//     cin >> n;
//     read(n, v);
//     vll dp(n);
//     dp[0] = 0;
//     rep(i, 1, n)
//     {
//         ll prev = dp[i - 1] + abs(v[i] - v[i - 1]);
//         ll prev1 = LONG_LONG_MAX;
//         if (i > 1)
//         {
//             prev1 = dp[i - 2] + abs(v[i] - v[i - 2]);
//         }
//         dp[i] = min(prev, prev1);
//        // cout << dp[i] << " ";
//     }
//      cout<<dp[n-1];
// }
void Letsgo()
{
    ll n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>v[i];
    cout<<frogjump(n-1,v); 

}

int main()
{
    FAST;
    ll n=1;
    //cin >> n;
    while (n--)
        Letsgo();
}
