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
    string s;
    cin >> s;
    
    int n;
    cin >> n;

    int len = n;
    
    int cnt = 0;
    rep(j,s.size()) {
        char cur = s[j];
        char cmax = s[j];
        int id = j;
        REP(l,j+1,min((int)s.size(),j+len+1)) {
            if(cmax < s[l]) {
                cmax = s[l];
                id = l;
            }
        }
        
        if(cur < cmax) {
            stringstream ss;
            rep(l,s.size()) {
                if(l == j) {
                    ss << s[id];
                }
                else if(l == id) continue;
                ss << s[l];
            }

            s = ss.str();

            len -= id-j;
            cnt += id-j;
        }

        if(cnt == n) break;
    }

    cout << s << endl;


    return 0;
}
