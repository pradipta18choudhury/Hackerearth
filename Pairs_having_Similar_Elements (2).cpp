#include<bits/stdc++.h>
#include <vector>
using namespace std;

long long SimilarElementsPairs (vector<int> A,int N) {
   // Write your code here
   long long int ans=0;
   sort(A.begin(),A.end());

   for(int i=1;i<N;i++)
   {
      long long int s=1,t=1;
      while(A[i]==A[i-1] || A[i]==A[i-1]+1)
     {
         s++;
         if(A[i]==A[i-1])
            t++;
         i++;
     }
     if(s!=1 && s!=t)
     ans+=(s*(s-1))/2;
   }
   return ans;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i_A=0; i_A<N; i_A++)
    {
        cin >> A[i_A];
    }

    long long out_;
    out_ = SimilarElementsPairs(A,N);
    cout << out_;
}