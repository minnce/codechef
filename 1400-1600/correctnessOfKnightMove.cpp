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
    string s;
    getline(cin,s);
    if (s.size()!=5) {
        cout << "Error\n";
    }
    else if (s[2]!='-') {
        cout << "Error\n";
    }
    else if ((s[0]<97||s[0]>104)||(s[3]<97||s[3]>104)||(s[1]<49||s[1]>56)||(s[4]<49||s[4]>56)) {
        cout << "Error\n";
    }
    else {
        if (((int)s[0]+2==(int)s[3]||(int)s[0]==(int)s[3]+2)&&((int)s[1]+1==(int)s[4]||(int)s[1]==(int)s[4]+1)) {
            cout << "Yes\n";
        }
        else if (((int)s[0]+1==(int)s[3]||(int)s[0]==(int)s[3]+1)&&((int)s[1]+2==(int)s[4]||(int)s[1]==(int)s[4]+2)) {
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
    }
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
   	ll t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        solve();
    }
    return 0;
}
