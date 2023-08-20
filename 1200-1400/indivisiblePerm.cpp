#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
   ll n;
   cin >> n;
   if (n > 3) {
       int start = 2;
       for (int i = 0; i < n-1; i++) {
           cout << start << " ";
           start++;
       }
       cout << 1 << endl;
   }
   else if (n == 2) {
       cout << "2 1" << endl;
   }
   else if (n==3) {
       cout << "1 3 2" << endl;
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
