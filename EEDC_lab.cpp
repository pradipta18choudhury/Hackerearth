#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); //to reduce the compile 
    cin.tie(0);
   long long n,i,sm,q,l,r;
   cin>>n;
   vector<int>v(n,0),v2(n);
   for(i=0;i<n;i++)
   {
       cin>>v[i];
   }
   sm=accumulate(v.begin(),v.end(),0); //sum of all the elements in vector
   for(i=0;i<n;i++)
   {
       if(i==0)
       {
           v2[i]=0;
       }
       else
       {
           v2[i]=v2[i-1];
       }
       if((sm-v[i])%3==0)
       {
           if((i==0 && v[n-1]==0)||(i==n-1 && v[n-2]==0)||((v[i-1]+v[n-1])%10)==0)
           {
                   v2[i]+=1;
           }
       }
   }
  v2.insert(v2.begin(),0); //inserting zero at the beginning
  cin>>q;
  while(q--)
 {
    cin>>l>>r;
    cout<<(v2[r]-v2[l-1])<<endl;
 }
 }