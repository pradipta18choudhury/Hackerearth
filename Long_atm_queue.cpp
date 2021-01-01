#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll n;
    cin>>n;
    ll arr[n];

    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    ll c=1;
    for(ll i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        c++;
    }
    cout<<c<<endl;
    return 0;
}