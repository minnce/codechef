#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define PB push_back
#define F first
#define S second
#define uset unordered_set
#define umap unordered_map
#define MP make_pair;
#define vt vector
#define REP(i, a) for (int i = 0; i < a; i++) // rep is 0 indexed
using namespace std;

void solve()
{
    bool flag = false;
    string s;
    cin >> s;
    if (s[0]!='<'||s[1]!='/'||s[s.length()-1]!='>'||s.length()==3) {
        cout << "Error\n";
    }
    else {
        for (int i = 2; i <s.size()-1; i++) {
            if (!((s[i]>=48&&s[i]<=57)||(s[i]>=97&&s[i]<=122))) {
                flag = true;
                break;
            }
        }
        if (flag==true) {
            cout << "Error\n";
        }
        else {
            cout << "Success\n";
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
