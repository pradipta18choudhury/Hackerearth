#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    map<int,int> m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        m[arr[i]]++;
    }
    long max=LONG_MIN,a;
    for(auto it:m){
        if(max<it.second){
            max=it.second;
            a=it.first;
        }
    }
    cout<<a;
    return 0;

}