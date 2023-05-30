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
    double sum = 0;
    map<int,int> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum+=arr[i];
        m[i+1]=arr[i];
    }
    double avg = (sum/(double)n);
    bool flag = false;
    for (const auto& elem: m) {
        if (elem.second==avg) {
            cout << elem.first << endl;
            flag = true;
            break;
        }
    }
    if (flag==false) {
        cout << "Impossible\n";
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
