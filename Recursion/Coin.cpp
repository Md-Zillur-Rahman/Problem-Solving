#include <bits/stdc++.h>
using namespace std;

#define ll long long int
long long int n, x;

ll Combination(ll x, ll a[],ll sum)
{
    if (sum>x)
        return 0;
    if (x == sum)
        return 1;
    ll total_way = 0;
    for (ll i = 0; i < n; i++)
    {
        total_way+= Combination(x, a, sum + a[i]);
    }
    return total_way%=1000000007;
}
int main()
{
    cin >> n >> x;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << Combination(x, a,0);
}