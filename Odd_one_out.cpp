#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll num;
    ll sum=0;
    for(ll i=1;i<n;i++)
    {
        cin>>num;
        sum+=num;
    }
    
    cout<<n*n-sum<<endl;
    return 0;
}