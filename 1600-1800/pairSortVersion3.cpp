#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define F first
#define S second
#define vt vector
using namespace std;

bool cmp(pair<ll,ll> a, pair<ll,ll> b) {
    if (a.S!=b.S) {
        if (a.S>b.S) {
            return 1;
        }
        else {
            return 0;
        }
    }
    else {
        if (a.F<b.F) {
            return 1;
        }
        else {
            return 0;
        }
    }
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
   	ll n;
    cin >> n;
    vector<pair<ll,ll>> v;
    ll arr[n];
    ll arr2[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }
    for (int i=0;i < n;i++) {
        v.pb(make_pair(arr[i],arr2[i]));
    }
    sort(v.begin(),v.end(),cmp);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i].F << " " << v[i].S << " ";
    }
    cout << endl;
}
