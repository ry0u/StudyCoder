#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <sstream>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    stringstream ss;
    rep(i,n) ss << s[i];
    string a = ss.str();
    sort(a.begin(),a.end());

    stringstream ss2;
    REP(i,n,n*2) ss2 << s[i];
    string b = ss2.str();
    sort(b.begin(),b.end());

    bool flag = true;
    rep(i,n) {
        if(a[i] >= b[i]) flag = false;
    }

    bool flag2 = true;
    rep(i,n) {
        if(a[i] <= b[i]) flag2 = false;
    }

    if(flag || flag2) cout << "YES" << endl;
    else cout << "NO" << endl;


    return 0;
}
