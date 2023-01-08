#include <bits/stdc++.h>
using namespace std;

#define lim 10000005
#define MOD 1000000007
#define ll long long

#define faster() ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

#define forloop(i, a, b) for(int i = a; i < b; i++)
#define testcase() int t; cin >> t; while(t--)

bool emailcheck(string s)
{
	int cnta = count(s.begin(), s.end(), '@'); // so luong @
	if(cnta != 1) return 0;
	int posa = s.find('@'); // vitri cua @
	string username = "", domainname = "";
	for(int i = 0; i < posa; i++)
	{
		if(isblank(s[i])) return 0;
		if(!isalnum(s[i]) && s[i] != '.' && s[i] != '_') return 0;
		username += s[i];
		if(username.size() > 64) return 0;
	}
	if(!username.size()) return 0;
	int dotcnt = 0;
	for(int i = posa + 1; i < s.size(); i++)
	{
		if(isblank(s[i])) return 0;
		if(!isalnum(s[i]) && s[i] != '.' && s[i] != '_') return 0;
		if(s[i] == '.') dotcnt++;
		domainname += s[i];
		if(domainname.size() > 254) return 0;
	}
	if(dotcnt == 1 && domainname.size() && domainname[domainname.size() - 1] == '.') return 0;
	return domainname.size() && dotcnt;
}

/*
2
code@ptit.edu.vn
ptit@ptit
*/

int main()
{   
	int t; cin >> t; cin.ignore(1);
	while(t--)
	{
		string s; getline(cin , s);
		if(emailcheck(s)) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}
 





