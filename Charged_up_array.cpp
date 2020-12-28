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
        int n;
        long long int ans=0;
        cin>>n;
        long long int arr[n];
    
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>=pow(2,n)/2)
                {
                    ans+=arr[i];
                }
        }
        cout<<ans%1000000007<<endl;
    }
    return 0;
}