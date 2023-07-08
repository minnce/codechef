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
    int n,k;
   cin >> n >> k;
   unordered_map<ll,int> fre;
   
   vector<int> arr(n);
   
   for(auto &it : arr)
   {
       cin >> it;
       fre[it] += 1;
   }
   
   if(fre[k] != 0)
   {   
       if(n == 1)
       {
           cout << "Yes" << endl;
           return;
       }
       if(arr[n-1] == k and fre[k] == 1)
       {
           cout << "No" << endl;
           return;
       }
       
       cout << "Yes" << endl;
       return;
   }
   
   cout << "No" << endl;
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
