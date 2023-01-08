#include <bits/stdc++.h>
using namespace std;

#define lim 10000005
#define MOD 1000000007
#define ll long long

#define faster() ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

#define forloop(i, a, b) for(int i = a; i < b; i++)
#define testcase() int t; cin >> t; while(t--)


int main()
{   
	int t; cin >> t; 
	while(t--)
	{
		cin.ignore(1);
		string s; 
		getline(cin, s);
		ll n; cin >> n;
		ll a[n];
		ll sum = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			if(a[i] < 0) sum += abs(a[i]);
		}
		if(sum >= 100000000) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}
 





