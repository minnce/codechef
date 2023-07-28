#Not sure why this is TLEing
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
    int mini = 1e9;
    unordered_map<int,int> m;
    for (int i =0; i < 32;i++) {
        for (int j = 0; j < 32; j++) {
            if (i!=j) {
                m[pow(2,i)+pow(2,j)]++;
            }
        }
    }
    for (auto elem : m) {
        mini = min(mini,abs(elem.first-n));
    }
    cout << mini << endl;
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
