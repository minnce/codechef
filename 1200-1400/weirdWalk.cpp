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
    ll arr[n], arr2[n];;
    ll tot1 = 0, tot2 = 0, toto=0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }
    for (int i = 0; i < n; i++) {
        if (tot1==tot2&&arr[i]==arr2[i]) {
            toto+=min(arr[i],arr2[i]);
        }
        tot1+=arr[i];
        tot2+=arr2[i];
    }
    cout << toto << endl;
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
