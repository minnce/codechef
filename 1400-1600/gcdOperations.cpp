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
    int arr[n];
    int arr2[n];
    bool flag = false;
    int maxi = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        arr2[i]=i+1;
        maxi = max(arr[i],maxi);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i]!=i+1) {
            if (arr[i]>maxi) {
                flag = true;
                break;
            }
            else if (gcd(arr[i],i+1)!=arr[i]) {
                flag = true;
                break;
            }
            else {
                arr2[i]=gcd(arr[i],i+1);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[i]!=arr2[i]) {
            flag = true;
            break;
        }
    }
    if (flag==true) {
        cout << "NO\n";
    }
    else {
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
