#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll maxx=0;
    for(ll i=0;i<=n-k;i++)
    {
        maxx=arr[i];
        for(ll j=i+1;j<i+k;j++)
        {
            maxx=max(maxx,arr[j]);
        }
        cout<<maxx<<" ";
    }
    return 0;
}