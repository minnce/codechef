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
   	int n;
    cin >> n;
    vt<int> v;
    vt<int> v2;
    vt<int> v3;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        v.pb(arr[i]);
        v3.pb(arr[i]);
    }
    sort(v3.begin(),v3.end());
    int cnt = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i]!=v3[i]) {
            cnt++;
            v2.pb(i);
            for (int j = i; j < v.size(); j++) {
                if (v[j]==v3[i]) {
                    v2.pb(j);
                    swap(v[i],v[j]);
                    break;
                }
            }
        }
    }
    cout << cnt << endl;
    for (int i = 0; i < v2.size(); i+=2) {
        cout << v2[i] << " " << v2[i+1] << endl;
    }
    return 0;
}
