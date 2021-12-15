#include <bits/stdc++.h>
using namespace std;
typedef long ll;

vector<int> getbnary(ll c)
{
    vector<int> v;
    while (c > 0)
    {
        v.push_back(c % 2);
        c = c / 2;
    }
    reverse(v.begin(),v.end());
    return v;
}

ll binary_(vector<int> v)
{
    ll dec = 0;
    reverse(v.begin(),v.end());
    for (int i = 0; i < v.size(); i++)
    {
        dec += v[i] * pow(2, i);
    }
    return dec;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll c;
        cin >> c;
        vector<int> m = getbnary(c);
        vector<int> a, b;
        a.push_back(1);
        b.push_back(0);
        for (int i =1; i <m.size(); i++)
        {
            if (m[i] == 0)
            {
                a.push_back(1);
                b.push_back(1);
            }
            else
            {
                a.push_back(0);
                b.push_back(1);
            }
        }
        ll x = binary_(a);
        ll y = binary_(b);
        cout<<x*y<<"\n";
    }
}
