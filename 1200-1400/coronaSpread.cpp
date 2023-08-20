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
    int mini = 0;
    int maxi = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int minConsec = 1e9;
    int maxConsec = 0;
    int currConsec = 1;
    sort(arr,arr+n);
    for (int i = 1; i < n; i++) {
        if ((abs(arr[i]-arr[i-1]))<=2) {
            currConsec++;
        }
        else {
            maxConsec = max(currConsec,maxConsec); 
            minConsec = min(currConsec,minConsec);
            currConsec = 1;
        }
    }
    maxConsec = max(currConsec,maxConsec); 
    minConsec = min(currConsec,minConsec);
    cout << minConsec << " " << maxConsec << endl;
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
