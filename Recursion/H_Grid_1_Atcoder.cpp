#include <bits/stdc++.h>
using namespace std;

#define ll long long int
long long int h, w;
char a[1002][1002];
ll dp[1002][1002];
ll solve(ll i, ll j)
{

    if (i > h || j > w)
        return 0;
    if (a[i][j] == '#')
        return 0;
    if (i == h && j == w)
        return 1;
    if (dp[i][j] != -1)
        return dp[i][j];

    ll ans = 0;
    ans = solve(i + 1, j) + solve(i, j + 1);
    ans = ans % 1000000007;
    return dp[i][j] = ans;
}
int main()
{
    cin >> h >> w;
    memset(dp, -1, sizeof(dp));
    for (ll i = 1; i <= h; i++)
    {
        for (ll j = 1; j <= w; j++)
            cin >> a[i][j];
    }
    cout << solve(1, 1);
}