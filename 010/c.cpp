#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define PI acos(-1)

using namespace std;
typedef long long ll;

int main()
{
	int n;
	cin >> n;

	vector<int> v(n);
	rep(i,n) cin >> v[i];
	sort(v.begin(),v.end(),greater<int>());

	ll res = 0;
	rep(i,n)
	{
		if(i%2 == 0) res += v[i]*v[i];
		else res -= v[i]*v[i];
	}

	cout << fixed;
	cout.precision(10);
	cout << PI*res << endl;
	
	return 0;
}
