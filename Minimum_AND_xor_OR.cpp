#include<bits/stdc++.h>
using namespace std;

void rotate(int n,int k,int arr[])
{
    k%=n;
    for(int i=0;i<n;i++)
    {
        int temp=(i+(n-k))%n;
        cout<<arr[temp]<<" ";
    }
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        rotate(n,k,arr);
        
    }
    return 0;
}