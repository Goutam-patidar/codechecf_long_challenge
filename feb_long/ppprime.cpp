#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
/*
ll fact(ll x)
{
    if (x == 1)
        return 1;
    return (x * fact(x - 1));
}
*/
/*
ll fin(ll x)
{
    vector<ll> p;
    if (x >3)
    {
        p.push_back(2);
        p.push_back(3);
        for (ll i = 1; i < sqrt(x)-2; i++)
        {
            p.push_back((6 * i) - 1);
            p.push_back((6 * i) + 1);
        }
    }
    else
    {
        if(x==2)
        return 1;
        if(x==3)
        return 2;
    }
    return p.size();
}*/
void primee(int *v,ll n)
{ /*
    if (t == 1)
        return 0;
    if (t == 2 || t == 3)
        return 1;

    for (ll i = 1; i < sqrt(t); i++)
    {
        ll a = (6 * i) - 1;
        ll b = (6 * i) + 1;
        if (a == t || b == t)
            return 1;
    }

    return 0;
*/

   // ll n = v.size();
    for (ll i = 3; i <= n; i += 2)
        v[i] = 1;
    for (ll i = 3; i <= n; i += 2)
    {
        if (v[i] == 1)
        {
            for (ll j = i * i; j <= n; j = i + j)
            {
                v[j] = 0;
            }
        }
    }
    v[2] = 1;
    v[1] = v[0] = 0;
    ll f = 0;
    for (ll i = 0; i <= n; i++)
    {
        if (v[i] == 1)
            f++;
        v[i] = f;
    }
}
/*
ll fin(ll x, ll y)
{
    ll t = 0;
    vector<ll> p;
    ll f = 0;
    while (t <= x)
    {
        if (primee(t))
        {
            f++;
        }
        p.push_back(f);
        t++;
    }
    return p[x];
}
ll ppprime(ll x, ll y)
{
    ll j = fin(x, y);
    if (j <= y)
        return 1;
    else
        return 0;
}*/

int main()
{
    ll t, f = 0;
    cin >> t;

    //  vector<ll> v;
    /*  for (ll i = 0; i <= 1000000; i++)
    {
        if (v1[i] == 1)
            f++;
        v.push_back(f);
    }
*/
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        int v1[x+1]={0};
        primee(v1,x+1);
        if (v1[x] <= y)
            cout << "Chef" << endl;
        else
            cout << "Divyam" << endl;
    }
}