#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll remove(string a)
{
    a[2] = a[3];
    a[3] = a[4];
    //cout << a;
    ll sum = 0;
    for (ll i = 0; i < 4; i++)
    {
        ll temp = a[i] - '0';
        sum = (sum * 10) + temp;
       
    }
    return sum;
}
ll func__(string a, string b)
{

    ll c = (remove(a));
    ll sum = c;
    if (b == "AM")
    {
        if (c >= 1200)
            sum = c - 1200;
    }
    else
    {
        if (c < 1200)
            sum = c + 1200;
    }
    return sum;
}

int  main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string a, b, c, d, e, f;
        cin >> a >> b;
        ll j, k, l;
        j = func__(a, b);
        ll n;
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            cin >> c >> d >> e >> f;

            k = func__(c, d);
            l = func__(e, f);

            if (k <= j && l >= j)
                cout<<"1";
            else
                cout<<"0";
        }
        if(t)
            cout << endl;
    }
}