// Simran Vedpathak
// Full Comdingbazi [ↂ■■ↂ]
//https://leetcode.com/problems/climbing-stairs/
#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define vll vector<ll>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

const ll mod = 1e9 + 7;
ll expo(ll a, ll b, ll mod)
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
bool prime[1000001];
void sieve()
{

    memset(prime, true, sizeof(prime));
    prime[1] = false;
    for (ll i = 2; i * i <= 1000000; i++)
    {
        if (prime[i])
        {
            for (ll j = i * i; j <= 1000000; j += i)
            {
                prime[j] = false;
            }
        }
    }
}

int solve(int n)
{
    ll prev2 = 1, prev = 2;
    ll ans = 0;
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 2;
    }
  

    for (int i = 2; i < n; i++)
    {
        ans = prev + prev2;
        prev2=prev;
        prev=ans;


    }
    return ans;
}
int main()
{
    FAST;
    sieve();

    ll n;
    n = 1;

    // cin >> n;
    while (n--)
    {
        ll k;
        cin >> k;
        cout << solve(k);
    }
}