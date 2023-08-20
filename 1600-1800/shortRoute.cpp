#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define PB push_back
#define F first
#define S second
#define uset unordered_set
#define umap unordered_map
#define MP make_pair;
#define vt vector
#define REP(i, a) for (int i = 0; i < a; i++) // rep is 0 indexed
using namespace std;

void solve()
{
    int n,m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans[n];
    int ans2[n];
    ans[0]=0; ans2[n-1]=0;
    for (int i = 0; i < n; i++) {
        if (arr[i]==1) {
            ans[i]=i+1;
        }
        else if (i!=0) {
            ans[i]=ans[i-1];
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[n-1-i]==2) {
            ans2[n-1-i]=n-i;
        }
        else if (i!=0) {
            ans2[n-1-i]=ans2[n-i];
        }
    }
    int times[n];
    times[0]=0;
    for (int i = 1; i < n;i ++) {
        if (ans2[i]==0&&ans[i]==0) {
            times[i]=-1;
        }
        else if (ans2[i]==i+1||ans[i]==i+1) {
            times[i]=0;
        }
        else {
            if (ans2[i]==0) {
                times[i]=i-ans[i]+1;
            }
            else if (ans[i]==0) {
                times[i]=ans2[i]-i-1;
            }
            else {
                times[i] = min(i-ans[i]+1,ans2[i]-i-1);
            }
        }
    }
    for (int i = 0; i < m; i++) {
        int d;
        cin >> d;
        cout << times[d-1] << " ";
    }
    cout << endl;
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
