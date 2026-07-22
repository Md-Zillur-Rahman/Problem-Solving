#include <bits/stdc++.h>
using namespace std;

#define ll long long int
long long int n, x;
ll dp[501][501];
ll move(ll a, ll b)
{
    if (a == b)
        return 0;
    if (dp[a][b] != -1)
        return dp[a][b];
    ll ans = 1e9;
    for (ll i = 1; i < a; i++)
    {
        ll temp = 1 + move(i, b) + move(a - i, b);
        ans = min(ans, temp);
    }
    for (ll i = 1; i < b; i++)
    {
        ll temp = 1 + move(i, a) + move(b - i, a);
        ans = min(ans, temp);
    }
    return dp[a][b] = ans;
}
int main()
{
    ll a, b;
    cin >> a >> b;
    memset(dp, -1, sizeof(dp));
    cout << move(a, b);
}