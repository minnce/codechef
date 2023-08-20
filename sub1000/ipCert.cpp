#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
   	int n,m,k;
    cin >> n >> m >> k;
    int toto = 0;
    for (int i = 0; i < n; i++) {
        int tot = 0; int q = 0;
        for (int j = 0; j < k; j++) {
            int dummy;
            cin >> dummy;
            tot+=dummy;
        }
        cin >> q;
        if (tot >= m && q <= 10) {
            toto++;
        }
    }
    cout << toto << endl;
}
