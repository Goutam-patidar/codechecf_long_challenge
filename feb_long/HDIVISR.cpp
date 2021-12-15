#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp=1;
    for(int i=1;i<=10;i++)
    {
        if(n%i==0 && i>temp)
        temp=i;
    }
    cout<<temp<<endl;
}