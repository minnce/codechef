#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define F first
#define S second
#define vt vector
using namespace std;

void solve()
{
    int n;
	cin >> n;
	ll arr[n];
	for (int i = 0; i < n; i++) {
	    int dummy;
	    cin >> dummy;
	    arr[i] = abs(dummy);
	}
	int mini = 1e9;
	int miniDex = 0;
	int maxi = 0;
	int maxiDex = 0;
	for (int i = 0; i < n; i++) {
	    if (i%2==0&&arr[i]<mini) {
	        mini = arr[i];
	        miniDex = i;
	    }
	    if (i%2==1&&arr[i]>maxi) {
	        maxi = arr[i];
	        maxiDex = i;
	    }
	}
	if (mini<maxi) {
	    swap(arr[miniDex],arr[maxiDex]);
	}
	ll tot = 0;
	for (int i = 0; i < n; i++) {
	    if (i%2==0) {
	        tot+=arr[i];
	    }
	    else {
	        tot-=arr[i];
	    }
	}
	cout << tot << endl;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
   	ll t;
    	cin >> t;
    	while (t--)
    	{
        	solve();
    	}
    	return 0;
}
