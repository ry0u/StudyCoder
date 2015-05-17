#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1<<30

using namespace std;

int main()
{
	int n,l;
	cin >> n >> l;

	vector<int> v;
	v.push_back(0);

	rep(i,n) 
	{
		int x;
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(),v.end());

	double ans = -1;
	
	rep(i,v.size()-1)
	{
		int d;
		if(i == 0)
		{
			d = v[i+1];
			ans = max(ans,(double)d);

		}
		else
		{
			d = v[i+1] - v[i];
			ans = max(ans,d/2.0);
		}
	}

	ans = max(ans,(double)(l-v[v.size()-1]));

	cout << fixed;
	cout.precision(20);
	cout << ans << endl;


	return 0;
}

