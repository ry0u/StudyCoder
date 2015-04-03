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
	int n,k;
	cin >> n >> k;
	
	vector<pair<int,int> > v(n);
	rep(i,n)
	{
		int a;
		cin >> a;

		v[i] = make_pair(a,i);
	}

	sort(v.begin(),v.end());

	vector<int> ans;
	int sum = 0;
	rep(i,v.size())
	{
		if(sum + v[i].first <= k)
		{
			sum += v[i].first;
			ans.push_back(v[i].second);
		}
		else break;
	}

	sort(ans.begin(),ans.end());

	
	cout << ans.size() << endl;
	rep(i,ans.size())
	{
		cout << ans[i] + 1;
		if(i == ans.size()-1) cout << endl;
		else cout << " ";
	}

	
	return 0;
}
