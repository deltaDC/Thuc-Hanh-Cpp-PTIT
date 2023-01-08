#include <bits/stdc++.h>
using namespace std;

#define lim 10000005
#define MOD 1000000007
#define ll long long
#define testcase() int t; cin >> t; while(t--)
#define faster() ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

string cung(int a, int b)
{
	if(b == 3 && a >= 21) return "Bach Duong";
	if(b == 4 && a <= 19) return "Bach Duong";
	if(b == 4 && a >= 20) return "Kim Nguu";
	if(b == 5 && a <= 20) return "Kim Nguu";
	if(b == 5 && a >= 21) return "Song Tu";
	if(b == 6 && a <= 20) return "Song Tu";
	if(b == 6 && a >= 21) return "Cu Giai";
	if(b == 7 && a <= 22) return "Cu Giai";
	if(b == 7 && a >= 23) return "Su Tu";
	if(b == 8 && a <= 22) return "Su Tu";
	if(b == 8 && a >= 23) return "Xu Nu";
	if(b == 9 && a <= 22) return "Xu Nu";
	if(b == 9 && a >= 23) return "Thien Binh";
	if(b == 10 && a <= 22) return "Thien Binh";
	if(b == 10 && a >= 23) return "Thien Yet";
	if(b == 11 && a <= 22) return "Thien Yet";
	if(b == 11 && a >= 23) return "Nhan Ma";
	if(b == 12 && a <= 21) return "Nhan Ma";
	if(b == 12 && a >= 22) return "Ma Ket";
	if(b == 1 && a <= 19) return "Ma Ket";
	if(b == 1 && a >= 20) return "Bao Binh";
	if(b == 2 && a <= 18) return "Bao Binh";
	if(b == 2 && a >= 19) return "Song Ngu";
	if(b == 3 && a <= 20) return "Song Ngu";
 }

int main()
{   
	testcase()
	{
		int a, b; cin >> a >> b;
		cout << cung (a, b) << endl;
	}
}
 





