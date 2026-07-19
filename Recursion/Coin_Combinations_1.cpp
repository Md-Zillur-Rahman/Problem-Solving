#include <bits/stdc++.h>
using namespace std;

#define ll long long int
long long int n, x;

ll Combination(ll x, ll a[], ll dp[])
{
    
    if (x < 0)
        return 0;
    if (x == 0)
        return 1;
    if (dp[x] != -1)
        return dp[x];
    ll total_way = 0;

    for (ll i = 0; i < n; i++)
    {
        total_way += Combination(x - a[i], a, dp);
        total_way %= 1000000007;
    }
    dp[x] = total_way;
     return dp[x];
}
int main()
{
    cin >> n >> x;
    ll a[n];
    ll dp[x+1];
    memset(dp, -1, sizeof(dp));
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << Combination(x, a, dp);
}