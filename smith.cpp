#include <bits/stdc++.h>
using namespace std;

#define lim 1000005
#define MOD 1000000007
#define ll long long

#define getstrs string s; cin >> s;
#define getarran ll a[n]; for(int i = 0; i < n; i++) cin >> a[i];
#define getarrbn ll b[n]; for(int i = 0; i < n; i++) cin >> b[i];
#define getarrbm ll b[m]; for(int i = 0; i < m; i++) cin >> b[i];
#define getmatrixanm ll a[n][m]; for(int i = 0; i < n; i++) {for(int j = 0; j < m; j++) {cin >> a[i][j];}}
#define getvectorvn vector<ll> v; for(int i = 0; i < n; i++) {int x; cin >> x; v.push_back(x);}
#define coutarran for(int i = 0; i < n; i++) { cout << a[i] << " "; }
#define getlln long long n; cin >> n;
#define getllm long long m; cin >> m;
#define getllp long long p; cin >> p;
#define getlla long long a; cin >> a;
#define getllb long long b; cin >> b;
#define getlld long long d; cin >> d;
#define getllk long long k; cin >> k;
#define getllx long long x; cin >> x;
#define getlly long long y; cin >> y;
#define getllz long long z; cin >> z;
#define getlls long long s; cin >> s;
#define getllab long long a, b; cin >> a >> b;
#define getllabc long long a, b, c; cin >> a >> b >> c;
#define faster() ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

#define forloop(i, a, b) for(int i = a; i < b; i++)
#define testcase() int t; cin >> t; while(t--)

ll sumDigit(ll n)
{
	ll res = 0;
	while(n != 0)
	{
		int last = n % 10;
		res += last;
		n /= 10;
	}
	return res;
}

ll sumFact(ll n)
{
	ll res = 0;
	double k = sqrt(n);
	for(int i = 2; i <= k; i++)
	{
		if(n % i == 0)
		{
			while(n % i == 0)
			{
				res += sumDigit(i);
				n /= i;
			}
		}
	}
	if(n != 1)
	{
		res += sumDigit(n);
		n = 1;
	}
	return res;
}

bool isSmith(ll n)
{
	if(sumDigit(n) == sumFact(n)) return 1;
	return 0;
}

int main()
{ 
	testcase()
	{
	  	getlln;
		if(isSmith(n)) cout << "YES";
		else cout << "NO";
		cout << endl;
	}  
}
 





