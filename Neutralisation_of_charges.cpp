#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }

    //sort(s.begin(),s.end());
    stack<char> str;
    for(int i=0;i<n;i++)
    {
        if(str.empty())
        str.push(s[i]);
        else if(str.top()==s[i])
        str.pop();
        else if(str.top()!=s[i])
        str.push(s[i]);
    }
    
    string ans="";
    while(!str.empty())
    {
        ans.push_back(str.top());
        str.pop();
    }
    //sort(ans.begin(),ans.end());
    int j=0,k=ans.length()-1;
    while(j<=k)
    {
        swap(ans[j],ans[k]);
        j++;
        k--;
    }
    cout<<ans.length()<<endl;
    cout<<ans<<endl;
    return 0;
}