#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    map<int,int> nums;
    int maxi = 0;
    for (int i = 0; i < n; i++) {
        int dummy;
        cin >> dummy;
        nums[dummy]++;
        maxi = max(dummy,maxi);
    }
    int common = 0;
    for (int i = 0; i < maxi+1; i++) {
        if (nums[i]>common) {
            common = nums[i];
        }
    }
    cout << (n-common) << endl;
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
