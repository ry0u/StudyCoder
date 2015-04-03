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
	int n,m;
	cin >> n >> m;	
	
	vector<pair<int,int> > v(n);
	vector<int> cost(n);
	rep(i,n)
	{
		int x;
		cin >> x;

		cost[i] = x;
		v[i] = make_pair(x,i);
	}

	sort(v.begin(),v.end(),greater<pair<int,int> >());

	bool connect[1005][1005];
	memset(connect,0,sizeof(connect));

	rep(i,m)
	{
		int x,y;
		cin >> x >> y;
		x--;
		y--;

		connect[x][y] = true;
		connect[y][x] = true;
	}

	bool used[1005];
	memset(used,0,sizeof(used));

	int ans = 0;
	rep(i,v.size())
	{
		int id = v[i].second;
		used[id] = true;
		
		rep(j,n)
		{

			if(used[j]) continue;
			if(connect[id][j])
			{
				ans += cost[j];
			}
		}
	}

	cout << ans << endl;
	
	return 0;
}
