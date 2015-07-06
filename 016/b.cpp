#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <sstream>
#include <map>
#include <set>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1<<30
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main() {
    ll cnt[15];
    memset(cnt,0,sizeof(cnt));
    cnt[0] = 0;
    cnt[1] = 9;
    cnt[2] = 189;
    cnt[3] = 2889;
    cnt[4] = 38889;
    cnt[5] = 488889;
    cnt[6] = 5888889;
    cnt[7] = 68888889;
    cnt[8] = 788888889;
    cnt[9] = 8888888889;
    cnt[10] = 98888888889;

    string s;
    cin >> s;

    ll a,b = 0;
    stringstream ss;
    ss << s;
    ss >> a;

    string t = ss.str();
    t[0] = '1';
    REP(i,1,t.size()) {
        t[i] = '0';
    }

    stringstream ss2;
    ss2 << t;
    ss2 >> b;

    a -= b;
    a++;

    cout << cnt[s.size()-1] + s.size()*a << endl;

    return 0;
}
