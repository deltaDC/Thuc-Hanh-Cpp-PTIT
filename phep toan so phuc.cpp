#include <bits/stdc++.h>
using namespace std;

#define lim 10000005
#define MOD 1000000007
#define ll long long
#define testcase() int t; cin >> t; while(t--)
#define faster() ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

class SoPhuc
{
	public:
		int thuc, ao;	
};

SoPhuc tong(SoPhuc a, SoPhuc b)
{
	SoPhuc res;
	res.thuc = a.thuc + b.thuc;
	res.ao = a.ao + b.ao;
	return res;
}

SoPhuc binh_phuong_tong(SoPhuc a, SoPhuc b)
{
	SoPhuc c = tong(a, b);
	int thuctemp = c.thuc;
	int aotemp = c.ao;
	c.thuc = c.thuc * c.thuc - c.ao * c.ao;
	c.ao = 2 * thuctemp * aotemp;
	return c;
}

void hien_thi(SoPhuc x)	
{
	cout << x.thuc << " + " << x.ao << "i";
}


int main() {
	int t;
	cin >> t;
	while (t--) {
		SoPhuc A;
		SoPhuc B;
		cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
		SoPhuc C = binh_phuong_tong(A, B);
		hien_thi(C);
		cout << endl;
	}
}
 





