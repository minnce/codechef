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
   	int n,k,p;
    cin >> n >> k >> p;
    vector<pair<int,int>> v;
    int arr[n];
    for (int i = 0; i < n; i ++) {
        cin >> arr[i];
        v.pb(make_pair(arr[i],i+1));
    }
    sort(v.begin(),v.end());
    map<int,int> m;
    m[v[0].S] = 0;
    for (int i = 1; i < n; i++) {
        if (v[i].F-v[i-1].F<=k) {
            m[v[i].S] = m[v[i-1].S];
        }
        else {
            m[v[i].S] = v[i].S;
        }
    }
    for (int i = 0; i < p; i++) {
        int d1,d2;
        cin >> d1 >> d2;
        if (m[d1]==m[d2]) {
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
    }
}
