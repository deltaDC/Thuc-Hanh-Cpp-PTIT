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

struct tuyensinh
{
	string ma, ten;
	double d1, d2, d3, tong, diemcong;	
};

void nhap(tuyensinh &x)
{
	cin >> x.ma;
	cin.ignore();
	getline(cin, x.ten);
	cin >> x.d1 >> x.d2 >> x.d3;
}

void in(tuyensinh x)
{
	x.tong = x.d1 * 2 + x.d2 + x.d3;
	cout << x.ma << " " << x.ten << " ";
	if(x.ma[2] == '1')
	{
		x.diemcong = 0.5;
		x.tong += 0.5;
		cout << "0.5 ";
	} 
	else if(x.ma[2] == '2')
	{
		x.diemcong = 1;
		x.tong += 1;
		cout << "1 ";
	} 
	else if(x.ma[2] == '3')
	{
		x.diemcong = 2.5;
		x.tong += 2.5;
		cout << "2.5 ";
	}
	cout << x.tong - x.diemcong << " ";
	if(x.tong < 24) cout << "TRUOT";
	else cout << "TRUNG TUYEN";
}

int main() 
{
    tuyensinh a;
    nhap(a);
    in(a);
}
 





