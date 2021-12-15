#include <bits/stdc++.h>
using namespace std;
typedef int ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        ll cnt = 0;
        ll flag = 0;
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for (ll i = 0; i < n; i++)
        {
            if (a[i] > i + 1)
            {
                cout << "Second\n";
                flag = 1;
                break;
            }
            else
            {
                cnt += i + 1 - a[i];
            }
        }
        if (flag == 0)
        {
            if (cnt & 1)
                cout << "First\n";
            else
                cout << "Second\n";
        }
    }
    return 0;
}