#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<string> first(n);
    vector<string> last(n);
    map<string, int> fName;
    for (int i = 0; i < n; i++) {
        cin >> first[i] >> last[i];
    }
    for (int i = 0; i < n; i++) {
        fName[first[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if (fName[first[i]]==1) {
            cout << first[i] << endl;
        }
        else {
            cout << first[i] << " " << last[i] << endl;
        }
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
