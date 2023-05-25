#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n,m,x,y;
    cin >> n >> m >> x >> y;
    for (int i = 0; i < n; i++) {
        string dummy;
        cin >> dummy;
        int solved = 0;
        int partial = 0;
        for(int j = 0; j < dummy.length(); j++) {
            if (dummy[j] == 'F') {
                solved++;
            }
            else if (dummy[j] == 'P') {
                partial++;
            }
        }
        if ((solved >= x) || (solved >= (x-1) && (partial>=y))) {
            cout << 1;
        }
        else {
            cout << 0;
        }
    }
    cout << endl;  
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
