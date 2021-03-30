#include<bits/stdc++.h>
#include<string>
using namespace std;
#define max(a,b)((a>b)?a:b);

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        
        long long ans=LONG_LONG_MIN;
        for(long long i=0;i<n;i++)
        {
            string s=str;
            str.erase(str.begin()+i);
            if(str.size()==0){
                str.clear();
                str=s;
                break;
            }
            long long x=stoll(str);
            ans=max(ans,x%k);
            str.clear();
            str=s;
        }
        ans=max(ans,stoll(str)%k);
        cout<<ans<<endl;
        
    }
}