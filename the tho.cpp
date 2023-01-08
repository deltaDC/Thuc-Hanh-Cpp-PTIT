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

//8
//Minh ve minh co nho ta
//Muoi lam nam ay thiet tha man nong
//Minh ve minh co nho khong
//Nhin cay nho nui nhin song nho nguon
//Mot canh hai canh lai ba canh
//Tran troc ban khoan giac chang lanh
//Canh bon canh nam vua chop mat
//Sao vang nam canh mong hon bay

//8
//Minh ve minh co nho ta
//Muoi lam nam ay thiet tha man nong
//Minh ve minh co nho khong
//Nhin cay nho nui nhin song nho nguon
//Minh ve minh co nho ta
//Muoi lam nam ay thiet tha man nong
//Minh ve minh co nho khong
//Nhin cay nho nui nhin song nho nguon


//8
//Mot canh hai canh lai ba canh
//Tran troc ban khoan giac chang lanh
//Canh bon canh nam vua chop mat
//Sao vang nam canh mong hon bay
//Mot canh hai canh lai ba canh
//Tran troc ban khoan giac chang lanh
//Canh bon canh nam vua chop mat
//Sao vang nam canh mong hon bay

int main() 
{
	int n; cin >> n; int t = n;
	cin.ignore();
	vector<ll> v;
	while(n--)
	{
		string s;
		getline(cin, s);
		string word;
		stringstream ss(s);
		int cnt = 0;
		while(ss >> word)
		{
			cnt++;
		}
		v.push_back(cnt);
	}
	
//	for(int i = 0; i < v.size(); i++) cout << v[i];
//	cout << endl;
	//cout << v.size() << endl;
	vector<ll> loai;
	ll sobai = 0;
	bool chuyendang = true;
	for(int i = 0; i < v.size(); )
	{
		if(v[i] == 6)
		{
			if(chuyendang == true)
			{
				loai.push_back(1);
				sobai++;
				chuyendang = false;
			}
			i += 2;
		}
		else
		{
			chuyendang = true;
			loai.push_back(2);
			sobai++;
			i += 4;
		}
	}
	cout << sobai << endl;
	for(auto x : loai) cout << x << endl;
}
 





