#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++)
    {
        arr[i+1]=arr[i+1]-arr[i];
    }
    if(arr[n-1]==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    

    return 0;
}