#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int l;
    string s;
    cin >> l >> s;
    bool began = false;
    bool ended = false;
    bool flag = false;
    bool exist = false;
    for (int i = 0; i < l; i++) {
        if (s[i] == 'H') {
            if (began == true) {
                cout << "Invalid\n";
                flag = true;
                break;
            }
            else {
                exist = true;
                ended = false;
                began = true;
            }
        }
        else if (s[i] == 'T') {
            if (began == true) {
                began = false;
                ended = true;
            }
            else if (ended == true) {
                cout << "Invalid\n";
                flag = true;
                break;
            }
            else {
                cout << "Invalid\n";
                flag = true;
                break;
            }
        }
    }
    if (flag == false) {
        if (exist == false) {
            cout << "Valid\n";
        }
        else if (began == false && ended == true) {
            cout << "Valid\n";
        }
        else if (exist == false && ended == true) {
            cout << "Invalid\n";
        }
        else {
            cout << "Invalid\n";
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
