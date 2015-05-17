#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	int a,b;
	cin >> a >> b;
	
	int d = __gcd(a,b);
	
	a /= d;
	b /= d;

	int cnt = 0;
	bool f_a = true;
	while(true)
	{
		if(a == 1) break;
		if(a%5 == 0) 
		{
			cnt++;
			a /= 5;
		}
		else if(a%3 == 0)
		{
			cnt++;
			a /= 3;
		}
		else if(a%2 == 0)
		{
			cnt++;
			a /= 2;
		}
		else 
		{
			f_a = false;
			break;
		}
	}

	bool f_b = true;
	while(true)
	{
		if(b == 1) break;

		if(b%5 == 0)
		{
			cnt++;
			b /= 5;
		}
		else if(b%3 == 0)
		{
			cnt++;
			b /= 3;
		}
		else if(b%2 == 0)
		{
			cnt++;
			b /= 2;
		}
		else
		{
			f_b = false;
			break;
		}
	}
	
	if(!(f_a && f_b))
	{
		cout << -1 << endl;
	}
	else cout << cnt << endl;

	return 0;
}
