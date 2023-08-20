#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n,p,x,y;
    cin >> n >> p >> x >> y;
    int arr[n];
    for (int i =0; i<n;i++) {
        cin >> arr[i];
    }
    int tot=0;
    for (int i = 0; i < p; i++) {
        if (arr[i]==0) {
            tot+=x;
        }
        else {
            tot+=y;
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
