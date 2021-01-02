#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,g;
    cin>>n>>m>>g;
    int arr[n],brr[m];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<m;j++)
    {
        cin>>brr[j];
    }
    
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i+1]-arr[i] >=brr[j] && g!=0)
            {
                count+=1;
                brr[j]=INT_MAX;
            }
        }
        g--;
    }
    cout<<count<<endl;
}


/*****

Approach->
    given n ,m and g.
    the first array represent the raining inervals,second array gives the time which will take to dry the clothes
    we need to find the intervals between the raining and then match with drying time and we need to find
    which drying time is less or equal than the raining time so that we can pick that clothes and increment one count 
    later we need to return that count.
*****/