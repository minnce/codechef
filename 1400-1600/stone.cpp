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
    long long int n,k;
    cin >> n >> k;
    long long int arr[n];
    long long int maxi = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        maxi = max(maxi,arr[i]);
    }
    if (k==0) {
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    else {
        ll int maxi2 = 0;
        for (int i = 0; i < n; i++) {
            arr[i]=(maxi-arr[i]);
            maxi2=max(arr[i],maxi2);
        }
        if (k%2==1) {
            for (int i = 0;i<n;i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        else {
            ll int maxi3 = 0;
            for (int i = 0; i < n; i++) {
                arr[i]=maxi2-arr[i];
                maxi3=max(arr[i],maxi3);
            }
            for (int i = 0; i <n; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
   	ll t;
    t=1;
    while (t--)
    {
        solve();
    }
    return 0;
}
