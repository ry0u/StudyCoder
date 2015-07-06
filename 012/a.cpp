#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <cmath>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;
typedef long long ll;

int main() {
    int n,m;
    cin >> n >> m;
    
    vector<int> v(n);
    rep(i,n) {
        cin >> v[i];
    }

    int ans = 0;
    rep(i,n) {
        int cnt = v[i];
        REP(j,i+1,n) {
            if(cnt + v[j] <= m) {
                i++;
                cnt += v[j];
            }
            else break;
        }
        ans++;
    }

    cout << ans << endl;
    return 0;
}
