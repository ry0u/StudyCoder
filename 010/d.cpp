#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	int n;
	cin >> n;

	int d[1<<17],xo[1<<17];
	vector<int> v;

	rep(i,n)
	{
		cin >> d[i] >> xo[i];
		if(d[i] == 1)
		{
			v.push_back(i);
		}
	}
	
	vector<pair<int,int> > ans;
	rep(i,v.size())
	{
		int x = v[i];
		if(d[x] == 0) continue;

		ans.push_back(make_pair(x,xo[x]));
		xo[xo[x]] ^= x;
		d[xo[x]]--;
		d[x]--;

		if(d[xo[x]] == 1)
		{
			v.push_back(xo[x]);
		}
	}

	cout << ans.size() << endl;
	rep(i,ans.size())
	{
		cout << ans[i].first << " " << ans[i].second << endl;
	}
	
	return 0;
}
