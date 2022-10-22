
#include <bits/stdc++.h>
using namespace std;
#define long long
#define pb push_back
#define vint vector<int>
#define st set<int>
#define msg multiset<int, greater<>>
#define ms multiset<int>
#define pint pair<int,int>
#define mp map<int,int>
#define vp vector<pair<int,int >>
#define ss second
#define ff first
#define read(n, x)          \
    for (int i = 0; i < n; i++) \
    {                       \
        int k;                  \
        cin >> k;           \
        x.pb(k);            \
    }
#define rep(i, j, k) for (int i = j; i < k; i++)
#define repn(i, j, k) for (int i = j; i >= k; i--)
//#define st(v) sort(v.begin(), v.end())
#define sz(x) (int) x.size()
#define no cout << "No\n";
#define yes cout << "Yes\n";
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                      \
    cout.tie(NULL)
const int mod = 1e9 + 7;
const int N = 2e5 + 10;
vint v;
string s;
int mem(int ind, int prelid, vector<vint> &dp)
{

    if (ind == sz(v) - 1)
        return (prelid ? v[ind] : 0);
    if (dp[ind][prelid] != -1)
    {
        return dp[ind][prelid];
    }
    if (prelid)
    {
        return dp[ind][prelid] = mem(ind + 1, s[ind + 1] - '0', dp) + v[ind];
    }
    else
    {
        int mx = mem(ind + 1, s[ind + 1] - '0', dp);
        if (s[ind + 1] - '0')
            mx = max(mx, v[ind] + mem(ind + 1, 0, dp));

        return dp[ind][prelid] = mx;
    }
}
void Letsgo()
{
    int n;
    cin >> n;
    v.clear();
    s="";
    vector<vint> dp(n + 1, vint(2, -1));
    cin >> s;
    read(n, v);

    cout << mem(0, s[0] - '0', dp) << '\n';
}

int main()
{
    FAST;

    int n = 1;
    int q;
    q = 1;
    cin >> q;
    while (q--)
    {
        Letsgo();
    }
}
