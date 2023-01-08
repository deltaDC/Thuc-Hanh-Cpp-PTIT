#include <bits/stdc++.h>
using namespace std;

#define lim 10000005
#define MOD 1000000007
#define ll long long

#define faster() ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

#define forloop(i, a, b) for(int i = a; i < b; i++)
#define testcase() int t; cin >> t; while(t--)

class DanhBa
{
	public:
		string ngay, ho, ten, so;	
};

bool comp(DanhBa a, DanhBa b)
{
	if(a.ten > b.ten) return 0;
	if(a.ten < b.ten) return 1;
	if(a.ho > b.ho) return 0;
	if(a.ho < b.ho) return 1;
	return 0;
}

int main()
{   
	ifstream input("SOTAY.txt");
	ofstream output("DIENTHOAI.txt");
	string s, date;
	DanhBa a[1005];
	map<int, string> mp;
	int idx = 0, i = 0;
	while(getline(input, s))
	{
		if(s.substr(0, 4) == "Ngay")
		{
			i++;
			date = s.substr(5, s.size() - 5);
			mp[i] = date;
		}
		else
		{
			string temp;
			getline(input, temp);
			vector<string> v;
			string firstName = "", word;
			stringstream ss(s);
			while(ss >> word)
			{
				v.push_back(word);
			}
			for(int i = 0; i < v.size() - 1; i++)
			{
				firstName += v[i] + " ";
			}
			a[idx].ten = v[v.size() - 1];
			a[idx].ho = firstName;
			a[idx].ngay = mp[i];
			a[idx].so = temp;
			idx++;
		}
	}
	sort(a, a + idx, comp);
	for(int i = 0; i < idx; i++)
	{
		output << a[i].ho << a[i].ten << ": " << a[i].so << " " << a[i].ngay << endl;
	}
}
 





