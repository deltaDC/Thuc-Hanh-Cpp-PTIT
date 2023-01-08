#include <bits/stdc++.h>
using namespace std;

#define lim 10000005
#define MOD 1000000007
#define ll long long
#define testcase() int t; cin >> t; while(t--)
#define faster() ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);


int main() 
{
	int n; cin >> n;
	double a[n];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	double max = *max_element(a, a + n);
	double min = *min_element(a, a + n);
	//cout << max << " " << min << endl;
	double sum = 0;
	int cnt = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] == max || a[i] == min) continue;
		else
		{
			//cout << a[i] << " ";
			sum += a[i];
			cnt++;
		}
	}
	sum /= cnt;
	cout << fixed << setprecision(2) << sum;
}
 





