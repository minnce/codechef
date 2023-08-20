#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n,x;
    cin >> n >> x;
    ll arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bool flag = false;
    for (int i = 1; i < n-1; i++) {
        if (arr[i]<arr[i-1]) {
            if(arr[i]+arr[i-1]<=x) {
                int dummy = arr[i];
                arr[i]=arr[i-1];
                arr[i-1]=dummy;
            }    
            else {
                cout << "NO\n";
                flag = true;
                break;
            }
        }
        if (arr[i]>arr[i+1]) {
            if(arr[i]+arr[i+1]<=x) {
                int dummy = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=dummy;
            }
            else {
                cout << "NO\n";
                flag = true;
                break;
            }
        }
    }
    if (flag == false) {
        cout << "YES\n";
    }
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
