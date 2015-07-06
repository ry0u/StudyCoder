#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;

    vector<ll> v(n);
    rep(i,n) cin >> v[i];

    ll cnt = 0;
    rep(i,n-1) {
        cnt += abs(v[i+1] - v[i]);
    }

    cout << v[0] + cnt + n + n-1 << endl;


    return 0;
}
