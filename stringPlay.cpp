#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        string s, r;
        cin >> s >> r;
        if (count(s.begin(),s.end(),'0') == count(r.begin(), r.end(), '0')) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
	return 0;
}
