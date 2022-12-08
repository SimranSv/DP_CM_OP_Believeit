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
#define rep(i, j, k) for (ll i = j; i < k; i++)
#define st(v) sort(v.begin(), v.end())
#define sz(x) (ll) x.size()
#define no cout << "No\n";
#define yes cout << "Yes\n";
string just_for_fun(string &s, string &t, int n, int m)
{
    int n1, m1;
    n1 = n, m1 = m;
    vector<pair<int, string>> prev(m + 1), curr(m + 1);
    rep(i,0,m){
        curr[i].ss=t[i];
    }

    for (int n1 = 1; n1 < n + 1; n1++)
    {
        for (int m1 = 1; m1 < m + 1; m1++)
        {
            if (s[n1 - 1] == t[m1 - 1])
            {
                curr[m1].ss = prev[m1 - 1].ss + s[n1];
                curr[m1].ff = 1 + prev[m1 - 1].ff;
            }
            else
            {
              curr[m1].ff = max(curr[m1 - 1].ff, prev[m1].ff);
                if (curr[m1].ff == curr[m1 - 1].ff)
                {
                    curr[m1].ss = curr[m1 - 1].ss;
                }
                else
                {
                    curr[m1].ss = prev[m1 - 1].ss;
                }
            }
        }
        prev = curr;
    }
    return curr[m].ss;
}
int main(){
    string s="ismmmmmmmmmmmran";
    string t="iran";
    cout<<just_for_fun(s ,t,16, 4)<<'\n';
}