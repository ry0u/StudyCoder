#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;
typedef long long ll;

int main()
{
	int a,b;
	cin >> a >> b;

	if(a < b) cout << 0 << endl;
	else if(a == b) cout << "infinity" << endl;
	elsr
	{
		int c = a-b;
		int cnt = 0;
		for(int i=1;i*i <= c;i++)
		{
			if(c%i == 0)
			{
				if(i > b) cnt++;
				if(i*i != c && c/i > b) cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
