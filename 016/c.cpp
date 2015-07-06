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
    int n;
    cin >> n;
    
    // end start id;
    vector<pair<pair<int,int>,int> > v;
    vector<int> X(n);
    int vmax = -1;

    rep(i,n) {
        int x,h;
        cin >> x >> h;

        X[i] = x;
        vmax = max(vmax,x);

        v.pb(mp(mp(x-1,x-h),i));
        v.pb(mp(mp(x+h,x+1),i));
    }

    sort(v.begin(),v.end());
    sort(X.begin(),X.end());

    int ans = 0;
    int pre = -INF;

    int used[100005];
    memset(used,0,sizeof(used));

    rep(i,v.size()) {
        int l = v[i].first.second;
        int r = v[i].first.first;
        int id = v[i].second;

        if(binary_search(X.begin(),X.end(),l) || binary_search(X.begin(),X.end(),r)) continue;
        vector<int>::iterator L = lower_bound(X.begin(),X.end(),l);
        vector<int>::iterator R = lower_bound(X.begin(),X.end(),r);

        if(pre < l) {
            if(!used[id] && L == R) {
                if((L == X.end() && R == X.end()) || (L != X.end() && R != X.end())) {
                    pre = r;
                    ans++;
                    used[id] = true;
                }
            }
        }
    }

    cout << ans << endl;



    return 0;
}
