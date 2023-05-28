#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int arr[10];
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    for (int i = 9; i >= 0; i--) {
        if (k-arr[i]>=0) {
            k-=arr[i];
            arr[i]=0;
        }
    }
    bool flag = false;
    for (int i = 9; i >= 0; i--) {
        if (arr[i]!=0) {
            cout << i+1 << endl;
            flag = true;
            break;
        }
    }
    if (flag == false) {
        cout << 1 << endl;
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
