#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void primee(vector<ll> &p, ll n)
{
    //finding prime no and storing in vector v
    vector<ll> v;
    // ll p[n];
    ll lp[n + 1] = {0};
    ll k = 0, l = 0;
    for (ll i = 2; i <= n; i++)
    {
        if (lp[i] == 0)
        {
            lp[i] = i;
            v.push_back(i);
        }
        for (ll j = 0; j < v.size() && v[j] <= lp[i] && i * v[j] <= n; j++)
        {
            lp[i * v[j]] = v[j];
        }
     /*   if (v[k] == l)
            k++;
        p.push_back(k);
        l++;*/
    }

    //now taking the no. of smaller prime no. then any no.and storig it in p
    for (ll i = 0, j = 0; i < n; i++)
    {
        if (v[j] == i)
            j++;
        p.push_back(j);
    }
}
int main()
{

    ll t;
    cin >> t;

    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        vector<ll> v;

       /* if (x < 7)
        {
           v.push_back(0);
v.push_back(0);
v.push_back(1);
           v.push_back(2);
            v.push_back(2);
             v.push_back(3); v.push_back(3);
        }
        */
            primee(v, x + 1);
        if (v[x] <= y)
            cout << "Chef" <<"\n";
        else
            cout << "Divyam" <<"\n";
    }
}