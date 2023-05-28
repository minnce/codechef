#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n,k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (k-arr[i]>=0){
            k-=arr[i];
            cnt++;
        }
        else {
            int hold = 0;
            if (arr[i]%2==1) {
                hold = 1;
            }
            if ((k-((arr[i]/2)+hold))>=0) {
                cnt++;
            }
            break;
        }
    }
    cout << cnt << endl;
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
