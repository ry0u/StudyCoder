#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	string s;
	cin >> s;
	
	int ret;
	if(s.size() <= 1) ret = s[s.size()-1]-'0';
	else ret = (s[s.size()-2]-'0')*10 + (s[s.size()-1]-'0');
	
	
	if(ret%4 == 0) cout << 4 << endl;
	else cout << 0 << endl;

	return 0;
}
