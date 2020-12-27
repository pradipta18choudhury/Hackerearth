#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool Jarvis(string s)
{
    int n=s.length();
    vector<char> v;
    for(int i=0;i<n;i++)
    {
        v.push_back(s[i]);
    }

    sort(v.begin(),v.end());
    auto c=v.end();
    c--;
    for(auto it=v.begin();it!=c;it++)
    {
        if((*(it)-*(it+1))!=-1)
        return false;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(Jarvis(s))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}