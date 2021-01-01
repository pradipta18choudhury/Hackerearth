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




/************
EXPLANATION:
Step 1: putting the elements in a vector v and storing the sum of it's elements in variable sm.

Step 2: now using a for loop to make a new vector v2. In the for loop you can see 3 conditions -

           1. if(i = = 0)

           2. else

           3. if((sm-v[i])%3==0)

First two conditions are easily understandable as the first condition is saying that v2[0]=0 and the second 
condition is saying that the present element of v2 will become same as the previous element i.e v2[i]=v2[i-1].

Now coming to 3rd condition: Remember the divisibility rule for 3? " If the sum of the digits of a number is 
divisible by 3, then the number is divisible by 3 " therefore , it will check whether the remaining sum of 
numbers(left number and right number) is divisible by 3 or not. If it is divisible then we will go deeper. Till this let's take the given example for more clarity --->

v = [1 5 7 5 6 7 5]

sum = 36 

Forming v2 vector with each iteration.....

iteration                v2 vector

 i=0                        [0]

 i=1                        [0,0]

 i=2                        [0,0,0]

 i=3                        [0,0,0,0]

 i=4                        [0,0,0,0,0]        since at index 4 , 6 is there so 36-6=30 which is divisible by 3. Now 

                                                       we will take a look at the deeper conditions.

There are three conditions:

1. i==0 && v[n-1]==0

2. i==n-1 && v[n-2]==0

3. (v[i-1]+v[n-1])%10==0

We have already checked the divisibility by 3 but according to the question sum of numbers(left number and right number) 
must be divisible by 2 and 5 also or you can say 10 also. For checking the divisibility we have broken the conditions in 3 parts. 

First condition says , first element is considered i.e i=0 and it's obvious that v[n-1] must be zero so that formed left number's 
last digit is zero(obviously here in this case right number will be zero) and of course it will be divisible by 10. 

Second condition says , last element is considered i.e i=n-1 and it's obvious that v[n-2] must be zero so that  formed right number's 
last digit is zero(obviously here in this case left number will be zero) and of course it will be divisible by 10.

Third condition says , middle elements are considered and to check divisibility we will check if the sum of the last digit of formed 
left and right numbers (obviously last digit of the left number will be v[i-1] and last digit of the right number will be v[n-1] i.e last number) is divisible by 10 or 10.

All these conditions confirms that the sum of numbers(left number and right number) is divisible by 2,3 and 5 and after meeting one 
of these condition (that's why used ||) we will increment the element of v2 by 1. Remember the above else loop it set the v2[4] to 0 
but now it will get increment by one as 6 follows the 3rd condition.

Now looking at the iterations:

i=4                      [0,0,0,0,1]

i=5                      [0,0,0,0,1,1]

i=6                      [0,0,0,0,1,1,1]

Now inserting zero at the beginning of the vector v2 as it is mentioned in the question values of L and R is given based on 1-based index.

Therefore the final vector v2 will look like this:

v2 = [0,0,0,0,0,1,1,1]

***********/
