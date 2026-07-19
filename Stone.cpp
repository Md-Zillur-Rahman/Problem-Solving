// This is my First change
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
long long int n;
ll Recursion(ll idx, ll sum1, ll sum2, ll a[])
{
    if (idx == n)
        return abs(sum1 - sum2);
    ll p1 = Recursion(idx + 1, sum1 + a[idx], sum2, a);
    ll p2 = Recursion(idx + 1, sum1, sum2 + a[idx], a);
    return min(p1, p2);
}
int main()
{

    cin >> n;
    long long int a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << Recursion(0, 0, 0, a);
}