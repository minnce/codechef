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
   	int n,m;
    cin >> n >> m;
    vt<int> spec;
    map<int,string,greater<int>> re;
    map<int, string,greater<int>> sp;
    for (int i = 0; i < n; i++) {
        int d;
        cin >> d;
        spec.pb(d);
    }
    for (int i = 0; i < m; i++) {
        int f,p; string s;
        cin >> f >> p >> s;
        if (find(spec.begin(),spec.end(),f)!=spec.end()) {
            sp[p]=s;
        }
        else {
            re[p]=s;
        }
    }
    for (auto e : sp) {
        cout << e.second << endl;
    }
    for (auto e: re) {
        cout << e.second << endl;
    }
}
