#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1<<30

using namespace std;

bool flag[1000000005];

int main()
{
	int n,l;
	cin >> n >> l;

	memset(flag,0,sizeof(flag));

	vector<int> v(n);
	rep(i,n)
	{
		cin >> v[i];
		flag[v[i]] = true;
	}

	vector<int> res;
	res.push_back(0);
	rep(i,1000000005)
	{
		if(flag[i])
		{
			res.push_back(i);
		}
	}
	res.push_back(l);

	double ans = -1;

	rep(i,res.size()-1)
	{
		int d = res[i+1] - res[i];
		ans = max(ans,d/2.0);
	}

	cout << fixed;
	cout.precision(20);
	cout << ans << endl;


	return 0;
}
