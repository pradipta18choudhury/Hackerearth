#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        int c=0,ans=0;
        for(ll i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                c++;
                if(ans<c)
                ans=c;
            }
            else
            c=0;
        }
        if(ans==0)
        ans=-1;
        cout<<ans<<endl;
        
        
    }
    return 0;
}