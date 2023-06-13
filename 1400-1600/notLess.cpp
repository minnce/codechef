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
    int n;
    cin >> n;
    int arr[n];
    map<int,int> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        m[arr[i]]++;
    }
    vt<int> v;
    for (auto e : m) {
        v.PB(e.S);
    }
    bool flag = false;
    for (int i = v.size()-1; i>=0; i--) {
        if (v[i]%2==1) {
            flag = true;
            break;
        }
    }
    if (flag == true) {
        cout << "Marichka\n";
    }
    else {
        cout << "Zenyk\n";
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
