#include <bits/stdc++.h>
using namespace std;

int Help(int n,int arr[])
{
    sort(arr,arr+n);
    int count=0;
    while(arr[n-1]>0)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2!=0)
            {
                arr[i]=arr[i]-1;
                count++;
            }
        }
        for(int i=0;i<n;i++)
        {
            arr[i]=arr[i]/2;
        }
        count++;
    }
    return count-1;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<Help(n,arr)<<endl;
    return 0;
}