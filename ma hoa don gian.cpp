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
	string s; getline(cin, s);
	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] >= 'a' && s[i] <= 'z')
		{
			if(s[i] == 'y') s[i] = 'a';
			else if(s[i] == 'z') s[i] = 'b';
			else s[i] += 2;
		}
		else if(s[i] >= 'A' && s[i] <= 'Z')
		{
			if(s[i] == 'A') s[i] = 'Y';
			else if(s[i] == 'B') s[i] = 'Z';
			else s[i] -= 2;
		}
	}
	cout << s;
}
 





