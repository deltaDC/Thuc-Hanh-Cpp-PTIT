#include <bits/stdc++.h>
using namespace std;

#define lim 10000005
#define MOD 1000000007
#define ll long long

#define faster() ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

#define forloop(i, a, b) for(int i = a; i < b; i++)
#define testcase() int t; cin >> t; while(t--)

class PTITStartUp
{
	public:
		int id, share, other;
		double total;
};


bool comp(PTITStartUp a, PTITStartUp b)
{
	if(a.total == b.total) return a.id < b.id;
	return a.total > b.total;
}

int main()
{   
	
	int n; cin >> n;
	PTITStartUp p[n];
	for(int i = 0; i < n; i++)
	{
		cin >> p[i].id >> p[i].share >> p[i].other;
		p[i].total = 0.7 * p[i].share + 0.3 * p[i].other;
	}
	sort(p, p + n, comp);
	for(int i = 0; i < 7; i++)
	{
		cout << p[i].id << " ";
	}
}
 





