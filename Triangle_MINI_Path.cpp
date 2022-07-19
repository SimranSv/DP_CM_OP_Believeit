//https://www.codingninjas.com/codestudio/problems/triangle_1229398?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=1
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
const ll N = 4e5 + 10;
//__Recursion :Stack space
// ll  trianglemini(ll ind,ll ind2,vector<vector<ll>>&v,ll n,vector<vector<ll>>&dp){

//     if(ind==n-1){
//         return v[ind][ind2];
//     }
//     if(dp[ind][ind2]){
//         return dp[ind][ind2];
//     }

//     ll row=v[ind][ind2]+trianglemini(ind+1,ind2+1,v, n,dp);
//     ll col=v[ind][ind2]+trianglemini(ind+1,ind2,v, n,dp);
//    // cout<<row<<" "<<col<<'\n';
//     return dp[ind][ind2]=min(row,col);
// }
//___Time Complexity O(n*n)__Space O(n*n)
    // vector<vll>dp(n,vll(n));
   
    // for(int i=0;i<n;i++){
    //     dp[n-1][i]=triangle[n-1][i];
    // }
    //   for(int i=n-2;i>=0;i--){
      
    //     for(int j=i;j>=0;j--){
          
    //         dp[i][j]=min(dp[i+1][j+1]+triangle[i][j],dp[i+1][j]+triangle[i][j]);
            
           
    //     }
    // }
  
    // return dp[0][0];
//__Space Optimization_Timecomplexity ofO(n*n);
//    vll temp(n),dp(n);
   
//     for(int i=0;i<n;i++){
//         dp[i]=triangle[n-1][i];
//     }
//       for(int i=n-2;i>=0;i--){
      
//         for(int j=i;j>=0;j--){
          
//             temp[j]=min(triangle[i][j]+dp[j],triangle[i][j]+dp[j+1]);
//            // dp[i][j]=min(dp[i+1][j+1]+triangle[i][j],dp[i+1][j]+triangle[i][j]);
            
           
//         }
//           dp=temp;
//     }
int minimumPathSum(vector<vector<int>>& triangle, int n){
      vector<vll>v(n,vll());
     vector<vll>dp(n,vll(n));
    for(int i=0;i<n;i++){
        ll x=triangle[i].size();
        for(int j=0;j<x;j++){
            ll z;
            
            v[i].pb(triangle[i][j]);
        }
    }
   return trianglemini(0,0,v,n,dp);

}