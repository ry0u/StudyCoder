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
	ll n,m,k;
	cin >> n >> m >> k;
	
	vector<int> a(n),b(m);
	rep(i,n) a[i] = i+1;
	rep(i,m) b[i] = i+1;
	
	ll l=1,r=100000000LL*100000000LL;
	while(l-r < 0) 
	{
		ll mid = (l+r)/2;
		ll c = 0;

		rep(i,n)
		{
			// c += upper_bound(b.begin(),b.end(),mid/a[i]) - b.begin();
			c += min(m,mid/a[i]);
		}

		if(c >= k) r = mid;
		else l = mid+1;
	}

	cout << l << endl;
	return 0;
}
