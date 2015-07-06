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

    vector<int> v(n);
    rep(i,n) {
        cin >> v[i];
    }

    int a[1005];
    memset(a,0,sizeof(a));

    a[0] = v[0];
    REP(i,1,n) {
        if(i%2 == 0) a[i] = a[i-1] + v[i];
        else a[i] = a[i-1] - v[i];
    }

    int Hmin = 0,Hmax = 0;
    rep(i,n) {
        Hmin = min(Hmin,a[i]);
        Hmax = max(Hmax,a[i]);
    }

    int f[2010][1005];
    memset(f,0,sizeof(f));

    int j=0,h=1005;
    rep(i,n) {
        if(i%2 == 0) {
            while(v[i]--) {
                f[h][j] = 1;
                h++;
                j++;
            }
            h--;
        }
        else {
            while(v[i]--) {
                f[h][j] = 2;
                h--;
                j++;
            }
            h++;
        }
    }

    for(int i=Hmax+1005-1;i>=Hmin+1005;i--) {
        rep(k,j) {
            if(f[i][k] == 0) cout << " ";
            if(f[i][k] == 1) cout << "/";
            if(f[i][k] == 2) cout << "\\";
        }
        cout << endl;
    }

    return 0;
}
