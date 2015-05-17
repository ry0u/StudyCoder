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
	ll h,n;
	cin >> h >> n;

	ll ans = 0;
	bool flag = true;
	for(ll i=h-1;i>=0;i--)
	{
		ll res = 1ll << i;
		if(((res >= n ) || flag) && !(res >= n && flag))
		{
			ans += (1ll<<i+1) - 1;
		}
		else
		{
			if(flag) flag = false;
			else flag = true;
		}
		
		ans++;
		if(res < n) n -= res;
	}


	cout << ans << endl;
	return 0;
}
