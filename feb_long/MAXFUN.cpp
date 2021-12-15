#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long a[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
       long long sum = abs(a[0]-a[n/2])+abs(a[n/2]-a[n-1])+abs(a[n-1]-a[0]);
        cout << sum << endl;
        
    }
}