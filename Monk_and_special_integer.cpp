#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

ll arr[100001];

int main()
{
	ll n, x, i, j, k, a, b, c, y, z, ans;
	ll start, mid, end;
	cin >> n >> x;
	for (i = 0; i < n; ++i) {
	    scan(arr[i]);
	}
	
	k = 0;
	start = 0; 
	end = n;
	ll s;
	while (start <= end) {
	    mid = start + (end - start) / 2;
	    s = 0;
	    for (i = 0; i < mid; ++i) {
	        s += arr[i];
	        if (s > x) {
	            break;
	        }
	    }
	    if (s <= x) {
	        for (i = mid; i < n; ++i) {
	            s -= arr[i-mid];
	            s += arr[i];
	            if (s > x) break;
	        }
	    }
	    
	    if (s > x) {
	        end = mid-1;
	    } else {
	        ans = mid;
	        start = mid + 1;
	    }
	}
	cout << ans << endl;
	
	return 0;
}

/**********

Monk and Special Integer
Monk and his best friend Micro were taking a stroll, when they found an array A having N integers lying on the road. The array was injured badly, so they took it with them and treated it.

When the array came back to senses, it told them, that some crazy guy came and started beating it. The array started crying and while Monk and Micro were comforting it, the last element of the array informed that the special integer is missing from its pocket. After hearing that, the array started crying even louder because it is supposed to appear in the next Code Monk Challenge with that Special Integer.

Special integer, K, of an array, is an integer such that none of its subarray of size K has sum of elements greater than X. To calm the array down, Monk decided to gift it the maximum possible value of special integer K. Now since Monk is busy with Code Monk he asked Micro to find the maximum value of special integer but right now, all Micro can think of is a Potato, so Micro asked for your help.

Input Format:
First line consists of two space separated integers denoting N and X.
Second line consists of N space separated integers denoting the array A.

Output Format:
Print the maximum possible value of special integer.

Constraints:



Sample Input
4 8
1 2 3 4

Sample Output
2
Explanation
Sum of all subarrays of size 1: 
Sum of all subarrays of size 2: 
Sum of all subarrays of size 3: 
Sum of all subarrays of size 4: 
So clearly, maximum subarray size, such that all subarrays of that size have sum of elements less than 8 is 2.
*********/