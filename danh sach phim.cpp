#include <bits/stdc++.h>
using namespace std;

#define lim 10000005
#define MOD 1000000007
#define ll long long

#define faster() ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

#define forloop(i, a, b) for(int i = a; i < b; i++)
#define testcase() int t; cin >> t; while(t--)

int cnt = 0;
map<string, string> mp;

class TheLoai
{
	public:
		string ma, ten;
		void nhap()
		{
			cnt++;
			ma = "TL";
			if(cnt < 10) ma += "00" + to_string(cnt);
			else if(cnt <= 10 && cnt < 100) ma += "0" + to_string(cnt);
			else ma += to_string(cnt);
			getline(cin, ten);
			mp[ma] = ten;
		}	
};

int convert(string &s)
{
	int res = 0;
	for(int i = 0; i < s.size(); i++)
	{
		res = res * 10 + s[i] - '0';
	}
	return res;
}

int cnt2 = 0;

class Phim
{	
	public:
		string ma, ten, ngay, tap, theloai, code;
		int ngay2, thang, nam, sotap;	
		void nhap()
		{
			code = "P";
			cnt2++;
			if(cnt2 < 10) code += "00" + to_string(cnt2);
			else if(cnt2 <= 10 && cnt2 < 100) code += "0" + to_string(cnt2);
			else code += to_string(cnt2);
			getline(cin, ma);
			theloai = mp[ma];
			getline(cin, ngay);
			getline(cin, ten);
			getline(cin, tap);
			string word;
			stringstream ss(ngay);
			getline(ss, word, '/');
			ngay2 = convert(word);
			getline(ss, word, '/');
			thang = convert(word);
			getline(ss, word, '/');
			nam = convert(word);
			sotap = convert(tap);
		}
		
		void in()
		{
			cout << code << " " << theloai << " " << ngay << " " << ten << " " << tap << endl;
		}
};

bool comp(Phim a, Phim b)
{
	if(a.nam > b.nam) return 0;
	if(a.nam < b.nam) return 1;
	
	if(a.thang > b.thang) return 0;
	if(a.thang < b.thang) return 1;
	
	if(a.ngay > b.ngay) return 0;
	if(a.ngay < b.ngay) return 1;
	
	if(a.ten > b.ten) return 0;
	if(a.ten < b.ten) return 1;
	
	if(a.sotap > b.sotap) return 0;
	if(a.sotap < b.sotap) return 1;
	return 0;
}

int main()
{   
	int n, m; cin >> n >> m;
	cin.ignore();
	TheLoai t[n];
	for(int i = 0; i < n; i++)
	{
		t[i].nhap();
	}
	Phim p[m];
	for(int i = 0; i < m; i++)
	{
		p[i].nhap();
	}
	sort(p, p + m, comp);
	for(int i = 0; i < m; i++)
	{
		p[i].in();
	}
}

/*
2 3
Hai huoc
Tinh cam
TL001
25/11/2021
Phim so 1
10
TL001
04/12/2021
Phim so 2
15
TL002
25/11/2021
Phim so 3
5
*/
 





