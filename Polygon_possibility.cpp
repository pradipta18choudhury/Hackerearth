#include <bits/stdc++.h>
using namespace std;

/**
Property: The length of the every given side must be less than the sum of the other remaining sides.
**/

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        sort(arr,arr+n);
        int x=arr[n-1],ans=0;

        for(int i=0;i<n-1;i++)
        {
            ans+=arr[i];
        }
        if(ans>x)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
    return 0;
}