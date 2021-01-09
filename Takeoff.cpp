#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,p,q,r;
        cin>>N>>p>>q>>r;
        int count=0;

        for(int i=1;i<=N;i++)
        {
            if((i%p==0)&&(i%q!=0)&&(i%r!=0))
            count++;
            else if((i%p!=0)&&(i%q==0)&&(i%r!=0))
            count++;
            else if((i%p!=0)&&(i%q!=0)&&(i%r==0))
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}