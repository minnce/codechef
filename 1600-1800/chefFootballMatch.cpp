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
    int arr[n], arr2[n];
    bool prev = false;
    for (int i = 0; i < n; i++) {
        int a;
        cin>>a>>arr[i]>>arr2[i];
        if (a==1)  {
            cout << "YES\n";
            if (arr[i]!=arr2[i]) {
                prev = true;
            }
            else {
                prev=false;
            }
        }
        else {
            if (i==0&&arr[i]!=arr2[i]) {
                cout << "NO\n";
                prev = false;
            }
            else if (arr[i]==arr2[i]) {
                cout << "YES\n";
                prev = false;
            }
            else if (prev==true&&max(arr[i-1],arr2[i-1])>min(arr[i],arr2[i])) {
                cout << "YES\n";
                prev = true;
            }
            else {
                cout << "NO\n";
                prev = false;
            }
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
