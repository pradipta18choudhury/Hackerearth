#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long n,k;
        cin>>n>>k;
        long arr[n],brr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        long maxx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            cin>>brr[i];
            maxx=max(maxx,brr[i]);
        }
        long x=maxx+1;
        long sum=0;
        for(int i=0;i<n;i++)
        {
            if(x>arr[i])
            sum+=(x-arr[i]);
        }
        cout<<sum*k<<endl;
    }
}