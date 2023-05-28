#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int tot = arr[0];
    int tot2 = arr[0];
    for (int i = 1; i < n; i++) {
        tot--;
        if (arr[i]!=0&&tot>=0) {
            tot+=arr[i];
            tot2+=arr[i];
        }
        if (tot<=0) {
            break;
        }
    }
    cout << tot2 << endl;
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
