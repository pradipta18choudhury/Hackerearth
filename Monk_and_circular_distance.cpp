#include <bits/stdc++.h>
using namespace std;
#define ll long long 

struct p
{
    ll x,y;
};

ll n;
ll q;
p arr[10000000];

bool comp(p a,p b)
{
    return a.x*a.x+a.y*a.y < b.x*b.x+b.y*b.y;
}

int main()
{
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i].x>>arr[i].y;
    }

    sort(arr,arr+n,comp);

    cin>>q;
    while(q--)
    {
        ll r;
        cin>>r;
        if(r>INT_MAX)
        {
            cout<<n<<endl;
            continue;
        }
        else
        {
            ll left,right;
            left=0,right=n-1;
            ll ans=0;
            while(left<=right)
            {
                ll middle=(left+right)/2;
                if(arr[middle].x*arr[middle].x+
                arr[middle].y*arr[middle].y <= r*r)
                {
                    ans+=middle-left+1;
                    left=middle+1;
                }
                else{
                    right=middle-1;
                }
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}