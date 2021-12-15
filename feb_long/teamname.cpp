/*#include <bits/stdc++.h>
using namespace std;
typedef short int ll;

ll func1(vector<string> v, ll n, set<string> s)
{
    vector<string> m(n);
    set<string> p;
    vector<string> x, y;

    ll flag = 0, j = 0;

    for (ll i = 0; i < n; i++)
    {
        m[i] = v[i];
    }
    for (ll i = 0; i < n; i++)
    {

        for (j = 0; j < n; j++)
        {
            m[i][0] = v[j][0];
            if (s.find(m[i]) == s.end())
            {
                x.push_back(m[i]);
                p.insert(m[i]);
            }
        }
    }
    for (ll i = 0; i < n; i++)
    {
        y[i] = x[i];
    }
    for (ll i = 0; i < x.size(); i++)
    {
        for (ll j = 0; j < n; j++)
        {
            y[i][0] = x[j][0];
            if (s.find(y[i]) == s.end())
                flag++;
        }
    }

    return flag;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<string> v;
        set<string> s;
        for (ll i = 0; i < n; i++)
        {
            string temp;
            cin >> temp;
            v.push_back(temp);
            s.insert(temp);
        }
        cout << func1(v, n, s) << endl;
    }
}
*/

#include <bits/stdc++.h>

using namespace std;
#define ll long long int

ll fun(vector<char> u, vector<char> v)
{
    set<char> s(u.begin(), u.end());

    ll temp = 0;

    for (auto x : v)
    {
        if (s.find(x) != s.end())
        {
            temp++;
        }
    }
    return temp;
}

int main()
{
    short int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        map<string, vector<char>> m;
        for (int i = 0; i < n; i++)
        {
            string c;

            cin >> c;
            if (c.length() > 0)
            {
                m[c.substr(1)].push_back(c[0]);
            }
        }

        ll ans = 0;

        for (auto i : m)
        {
            for (auto j : m)
            {
                if (i.first != j.first)
                {
                    ll temp = fun(i.second, j.second);
                    // cout<<i.first<<"  "<<j.first<<"  "<<i.second<<" "<<j.second<<endl;
                    ans += (i.second.size() - temp) * (j.second.size() - temp);
                }
            }
        }
        cout << ans << "\n";
    }
}