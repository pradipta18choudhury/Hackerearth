#include <bits/stdc++.h>
using namespace std;

vector<string> v;

int main()
{
    string s,b;
    cin>>s;
    int k;
    cin>>k;

    
    for(int i=0;s[i];i++)
    {
        b="";
        for(int j=i;s[j];j++)
        {
            b+=s[j];
        }
        v.push_back(b);
    }

    sort(v.begin(),v.end());
    cout<<v[k-1]<<endl;
}