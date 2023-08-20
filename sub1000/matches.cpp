#include <iostream>
#include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;

void solve()
{
    int c,b;
    cin >> c >> b;
    c+=b;
    string a = to_string(c);
    int tot = 0;
    for (int i = 0; i < a.length(); i++) {
        if (a[i]=='0') {
            tot+=6;
        }
        else if (a[i]=='1') {
            tot+=2;
        }
        else if (a[i]=='2'||a[i]=='3'||a[i]=='5') {
            tot+=5;
        }
        else if (a[i]=='4') {
            tot+=4;
        }
        else if (a[i]=='7') {
            tot+=3;
        }
        else if (a[i]=='8') {
            tot+=7;
        }
        else if (a[i]=='9'||a[i]=='6') {
            tot+=6;
        }
    }
    cout << tot << endl;
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
