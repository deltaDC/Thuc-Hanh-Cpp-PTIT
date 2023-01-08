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

struct thuphi
{
	string bien, loai, chieu, ngay;
	ll soghe;
	//ll giatien = 0;	
};

void nhap(thuphi x[], int n)
{
	for(int i = 0; i < n; i++)
		cin >> x[i].bien >> x[i].loai >> x[i].soghe >> x[i].chieu >> x[i].ngay;
}

ll tinhtien(thuphi x)
{
	if(x.chieu == "OUT") return 0;
	else
	{
		if(x.loai == "Xe_con" && x.soghe == 5) return 10000;
		if(x.loai == "Xe_con" && x.soghe == 7) return 15000;
		if(x.loai == "Xe_tai" && x.soghe == 2) return 20000;
		if(x.loai == "Xe_khach" && x.soghe == 29) return 50000;
		if(x.loai == "Xe_khach" && x.soghe == 45) return 70000;
	}
}

int main() 
{
	unordered_map<string, ll> unmp;
	vector<string> v;
    int n; cin >> n;
	thuphi a[n];
	nhap(a, n);
	for(int i = 0; i < n; i++)
	{
		if(unmp[a[i].ngay] == 0) v.push_back(a[i].ngay);
		unmp[a[i].ngay] += tinhtien(a[i]);
	}
	//for(auto x : v) cout << x << " ";
	for(auto x : v)
	{
		if(unmp[x] != 0)
		{
			cout << x << ": " << unmp[x] << endl;
			unmp[x] = 0;
		}
	}
}
 





