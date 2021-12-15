#include <bits/stdc++.h>
typedef short int ll;
using namespace std;

ll getindex(vector<ll> c, vector<ll> w, ll i)
{
    for (ll j = 0; j < w.size(); j++)
    {
        if (c[i] == w[j])
            return j;
    }
    return -1;
}

int main()
{
    ll t, n, k;
    k = 0;
  
    cin >> t; 
    while (t--)
    {  vector<ll> w, l;
    vector<ll> c, v;
        ll temp, flag = 0;
        cin >> n;

        for (ll i = 0; i < n; i++)
        {
            cin >> temp;
            w.push_back(temp);
            c.push_back(temp);
            v.push_back(i);
        }

        for (ll i = 0; i < n; i++)
        {
            cin >> temp;
            l.push_back(temp);
        }
        sort(c.begin(), c.end());
        for (ll i = 1; i < n; i++)
        {
            ll index = getindex(c, w, i);
            ll p = v[getindex(c, w, i - 1)];
            ll k = index;
            while (k <= p)
            {
                k = k + l[index];
                v[index] = k;
                flag++;
            }
        }
        cout << flag << endl;
    }
}
