#pragma GCC optimize("O2,no-stack-protector,unroll-loops,fast-math")
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define PB push_back
#define F first
#define S second
#define uset unordered_set
#define umap unordered_map
#define MP make_pair
#define vt vector
#define all(x) begin(x), end(x)
#define sz(x) (int)x.size()
#define REP(i, a) for (int i = 0; i < a; i++)
#define pii pair<int, int>;
#define pll pair<ll, ll>;

using namespace std;

typedef vector<ll> vl;
typedef pair<ll,ll> pl;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    map<int,int> m;
    map<int,int> m2;
    bool flag = false;
    bool f = false;
    for (int i = 0; i < n; i++) {
        int d;
        cin >> d;
        arr[i] = d;
        if (i>0&&arr[i]<arr[i-1]&&f==false) {
            flag = true;
        }
        else if (i>0&&arr[i]>arr[i-1]&&f==true) {
            flag = true;
        }
        if (d>7) {
            flag = true;
        }
        else if (d==7) {
            f = true;
        }
        else if (f==false) {
            m[d]++;
        }
        else if (f==true) {
            m2[d]++;
        }
    }
    if ((m.size()+m2.size())!=12||f==false) {
        flag = true;
    }
    else {
        for (auto e:m) {
            if (e.S!=m2[e.F]) {
                flag = true;
                break;
            }
        }
    }
    if (flag==false) {
        cout << "yes\n";
    }
    else {
        cout << "no\n";
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
