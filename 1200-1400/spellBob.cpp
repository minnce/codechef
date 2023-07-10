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
    string s1,s2;
    cin >> s1 >> s2;
    int b=0,o=0,flip=0;
    bool flag = false;
    for (int i = 0; i < s1.size(); i++) {
        if ((s1[i]=='b'&&s2[i]=='o')||(s1[i]=='o'&&s2[i]=='b')) {
            flip++;
        }
        else if (s1[i]=='b'||s2[i]=='b') {
            b++;
        }
        else if (s1[i]=='o'||s2[i]=='o') {
            o++;
        }
        if (flip>=3||(b>=1&&o>=1&&flip>=1)||(b>=2&&o>=1)||(o>=1&&flip>=2)||(b>=2&&flip>=1)||(b>=1&&flip>=2)) {
            flag = true;
            break;
        }
    }
    if (flag==true) {
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
