#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define F first
#define S second
#define vt vector
using namespace std;


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
    int a,b;
    cin >> a >> b;
    ll dummy = (a+b+(a*b));
    string s = to_string(dummy);
    if (count(s.begin(),s.end(),'1')==s.size()) {
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
    }
}
