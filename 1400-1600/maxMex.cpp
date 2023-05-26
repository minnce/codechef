#include <iostream>
#include <bits/stdc++.h>
#include <set>
#define ll long long
using namespace std;

void solve()
{
    ll n,k;
    cin >> n >> k;
    set<int> nums;
    for (int i = 0; i < n; i++) {
        int dummy;
        cin >> dummy;
        nums.insert(dummy);
    }
    for (int i = 0; i < nums.size(); i++) {
        if ((nums.find(i)==nums.end())&&k!=0) {
            nums.insert(i);
            k--;
        }
        else if ((nums.find(i)==nums.end())&&k==0) {
            break;
        }
    }
    bool flag = false;
    for (int i = 0; i < nums.size();i++) {
        if (nums.find(i)==nums.end()) {
            cout << i << endl;
            flag = true;
            break;
        }
    }
    if (flag == false) {
        cout << (nums.size()+k) << endl;
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
