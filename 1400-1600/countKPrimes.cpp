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

ll n = 1e5+5;
vt<ll>prime(n);
int arr[6][100007];

void sieve() {
    for(int i = 2; i < n; i++) {
        if (prime[i]==0) {
            for (int j = i; j <n; j+=i) {
                prime[j]++;
            }
        }
    }
    ll o = 0, p = 0, q = 0, r = 0, s = 0;
    for (int i = 0; i < n; i++) {
        if (i==0||i==1) {
            arr[1][i]=0;arr[2][i]=0;arr[3][i]=0;arr[4][i]=0;arr[5][i]=0;
        }
        else if (prime[i]==1) {
            o++;
            arr[1][i]=o;
            arr[2][i]=p;
            arr[3][i]=q;
            arr[4][i]=r;
            arr[5][i]=s;
        }
        else if (prime[i]==2) {
            p++;
            arr[1][i]=o;
            arr[2][i]=p;
            arr[3][i]=q;
            arr[4][i]=r;
            arr[5][i]=s;
        }
        else if (prime[i]==3) {
            q++;
            arr[1][i]=o;
            arr[2][i]=p;
            arr[3][i]=q;
            arr[4][i]=r;
            arr[5][i]=s;
        }
        else if (prime[i]==4) {
            r++;
            arr[1][i]=o;
            arr[2][i]=p;
            arr[3][i]=q;
            arr[4][i]=r;
            arr[5][i]=s;
        }
        else if (prime[i]==5) {
            s++;
            arr[1][i]=o;
            arr[2][i]=p;
            arr[3][i]=q;
            arr[4][i]=r;
            arr[5][i]=s;
        }
        else {
            arr[1][i]=o;
            arr[2][i]=p;
            arr[3][i]=q;
            arr[4][i]=r;
            arr[5][i]=s;
        }
    }
}

void solve()
{
    int a,b,k;
    cin >> a >> b >> k;
    cout << arr[k][b]-arr[k][a-1] << endl;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	sieve();
   	ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
