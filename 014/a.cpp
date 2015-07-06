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
    int n;
    cin >> n;
    
    vector<pair<int,int> > v(n);
    rep(i,n) cin >> v[i].second >> v[i].first;

    sort(v.begin(),v.end());
    
    bool flag = false;
    REP(i,1,n) {
        if(v[i-1].second > v[i].second) flag = true;
    }

    if(flag) cout << "Happy Alex" << endl;
    else cout << "Poor Alex" << endl;
    

    return 0;
}
