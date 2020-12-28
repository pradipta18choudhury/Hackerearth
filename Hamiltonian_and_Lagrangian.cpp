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

    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n&&arr[i]>=arr[j];j++);
        if(j==n)
        cout<<arr[i]<<" ";
    }
    return 0;
}