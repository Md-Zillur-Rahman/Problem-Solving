#include <bits/stdc++.h>
using namespace std;

#define ll long long int
long long int n, x;

ll Combination(ll x, ll a[])
{
    if (x < 0)
        return 0;
    if (x == 0)
        return 1;

    ll total_way = 0;

    for (ll i = 0; i < n; i++)
    {
       total_way+= Combination(x - a[i], a);
       total_way%=1000000007;
    }
    return total_way;
}
int main()
{
    cin >> n >> x;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

   cout<< Combination(x, a);
}