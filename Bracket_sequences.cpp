#include <bits/stdc++.h>
using namespace std;

bool isCheck(string s)
{
    int l=0,r=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(')
        l++;
        else
        r++;
    }
    return (l==r);
}


int main()
{
    string s;
    cin>>s;
    int n=s.length();
    
    if(!isCheck(s))
    cout<<"0"<<endl;
    else
    {
        int c=0,d=0,shift=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            c++;
            else
            c--;
            if(c<d)
            {
                d=c;
                shift=i+1;
            }
        }
        
        reverse(s.begin(),s.begin()+shift);
        reverse(s.begin()+shift,s.end());
        reverse(s.begin(),s.end());
        
        c=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            c++;
            else
            c--;
            if(c==0)
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}