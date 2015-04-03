#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007

using namespace std;
typedef long long ll;

struct Tree
{
	Tree *next[100];

	Tree(int n2)
    {
		fill(next,next+n2,(Tree *)0);
    }

};

int n,k,d;
ll ans = 0;

void init(Tree *t,int dep)
{
	if(dep > n) return;
	rep(i,k)
	{
		t->next[i]= new Tree(k);
		init(t->next[i],dep+1);
	}
}

void dfs(Tree *t,ll c,int dep)
{
	if(dep > n-d + 1) return;
	if(c > n) return;
	if(c == n)
	{
		ans++;
		return;
	}

	rep(i,k)
	{
		dfs(t->next[i],c+i+1,dep+1);
	}
	return;
}

int main()
{
	cin >> n >> k >> d;

	Tree *tree = new Tree(k);

	init(tree,0);
	dfs(tree,0,0);

	cout << ans%MOD << endl;
}
