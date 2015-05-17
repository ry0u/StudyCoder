#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int n,m,sy,sx;
vector<string> v;
char start;
bool used[55][55],ret;
 
bool can(int y,int x)
{
	if(0 <= y && y < n && 0 <= x && x < m) return true;
	else return false;
}

void dfs(int y,int x,int prey,int prex)
{
	rep(i,4)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if(can(ny,nx) && v[ny][nx] == start)
		{
			if(ny == prey && nx == prex) continue;
			if(used[ny][nx] && ny == sy && nx == sx)
			{
				ret = true;
				return;
			}
			else if(!used[ny][nx])
			{
				used[ny][nx] = true;
				dfs(ny,nx,y,x);
			}
		}
	}
}

int main()
{
	cin >> n >> m;

	v.resize(n);
	rep(i,n) cin >> v[i];
	
	bool flag = false;
	rep(i,n)
	{
		rep(j,m)
		{
			
			memset(used,0,sizeof(used));
			used[i][j] = true;

			sy = i;
			sx = j;
			start = v[i][j];
			ret = false;

			dfs(i,j,-1,-1);
			if(ret) flag = true;

		}
	}

	if(flag) cout << "Yes" << endl;
	else cout << "No" << endl;
	
	return 0;
}
