#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    map<int,int> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        m[arr[i]]++;
    }
    int currMax = 0;
    int max2 = 0;
    for (const auto& elem : m) {
        if (elem.second>=currMax) {
            max2 = currMax;
            currMax = elem.second;
        } 
        else if (elem.second>=max2) {
            max2 = elem.second;
        }
    }
    bool flag = false;
    if (currMax == max2) {
        cout << max2 << endl;
        flag = true;
    }
    if (currMax%2==1) {
        currMax++;
    }
    if (flag == false){
        cout << (max(currMax/2,max2)) << endl;
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
