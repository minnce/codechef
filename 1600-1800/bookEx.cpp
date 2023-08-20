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
    stack<pair<int,string>> s;
    stack<int> mini;
    for (int i = 0; i < n; i++) {
        int dummy;
        cin >> dummy;
        if (dummy==-1) {
            int cnt = 0;
            while (s.top().F!=mini.top()) {
                s.pop();
                cnt++;
            }
            cout << cnt << " " << s.top().S << endl;
            s.pop();
            mini.pop();
        }
        else {
            string st;
            cin >> st;
            if (dummy!=0) {
                s.push(make_pair(dummy,st));
                if (mini.size()==0||dummy<=mini.top()) {
                    mini.push(dummy);
                }
            }
        }
    }
}
