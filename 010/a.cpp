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
	
	bool used[105];
	memset(used,0,sizeof(used));

	int q;
	cin >> q;
	rep(i,q)
	{
		int a;
		cin >> a;
		used[a] = true;
	}

	cin >> q;
	rep(i,q)
	{
		int a;
		cin >> a;
		used[a] = true;
	}

	bool flag = true;
	REP(i,1,n+1)
	{
		if(!used[i]) flag = false;
	}

	if(flag) cout << "I become the guy." << endl;
	else cout << "Oh, my keyboard!" << endl;


	return 0;
}
