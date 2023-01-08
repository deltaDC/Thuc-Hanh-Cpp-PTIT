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
	int t; cin >> t; cin.ignore(1);
	while(t--)
	{
		string s;
		getline(cin, s);
		int cntchar = 0;
		stringstream ss(s);
		while(ss >> s)
		{
			if(cntchar + s.size() > 100) break;
			else
			{
				cntchar += s.size();
				cntchar++;
				cout << s << " ";
			}
		}
		//cout << endl << cntchar;
		cout << endl;
	}
}
 





