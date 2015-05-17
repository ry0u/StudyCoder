#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int cnt[3*100005];

int main()
{
	string s;
	cin >> s;

	memset(cnt,0,sizeof(cnt));

	int n,x;
	cin >> n;
	rep(i,n)
	{
		cin >> x;
		
		cnt[x-1]++;
	}

	REP(i,1,s.size())
	{
		cnt[i] += cnt[i-1];
	}

	rep(i,s.size()/2)
	{
		if(cnt[i]%2 != 0) 
		{
			swap(s[i],s[s.size()-i-1]);
		}
	}

	cout << s << endl;


	return 0;
}
