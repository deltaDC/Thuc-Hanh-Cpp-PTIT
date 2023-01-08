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

double bandscore(ll n)
{
	if(n >= 3 && n <= 4) return 2.5;
	if(n >= 5 && n <= 6) return 3.0;
	if(n >= 7 && n <= 9) return 3.5;
	if(n >= 10 && n <= 12) return 4.0;
	if(n >= 13 && n <= 15) return 4.5;
	if(n >= 16 && n <= 19) return 5.0;
	if(n >= 20 && n <= 22) return 5.5;
	if(n >= 23 && n <= 26) return 6.0;
	if(n >= 27 && n <= 29) return 6.5;
	if(n >= 30 && n <= 32) return 7.0;
	if(n >= 33 && n <= 34) return 7.5;
	if(n >= 35 && n <= 36) return 8.0;
	if(n >= 37 && n <= 38) return 8.5;
	if(n >= 39 && n <= 40) return 9.0;
}

int main()
{   
	testcase()
	{
		double r, l , s , w;
		cin >> r >> l >> s >> w;
		r = bandscore(r);
		l = bandscore(l);
		//cout << r << " " << l << " " << s << " " << w << endl;
		double mid = (double) (r + l + s + w) / 4;
		if(mid - (ll) mid < 0.25) mid = (ll) mid;
		else if(mid - (ll) mid >= 0.25 && mid - (ll) mid < 0.75) mid = (double) ((ll) mid) + 0.5;
		else if(mid - (ll) mid >= 0.75) mid = (ll) mid + 1;
		cout << fixed << setprecision(1) << (double) mid << endl;
	}
}
 





