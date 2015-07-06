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

    int n = s.size();

    bool flag = true;
    rep(i,n) {
        int a = s[i]-'0';
        if(a % 8 == 0 && flag) {
            flag = false;
            cout << "YES" << endl;
            cout << s[i] << endl;
        }

        REP(j,i+1,n) {
            int b = (s[j]-'0');
            if((a*10 + b) %8 == 0 && flag) {
                flag = false;
                cout << "YES" << endl;
                cout << a*10 + b << endl;
            }

            REP(k,j+1,n) {
                int c = (s[k]-'0');
                
                if((a*100+b*10+c)%8 == 0 && flag) {
                    flag = false;
                    cout << "YES" << endl;
                    cout << a*100 + b*10 + c << endl;
                }
            }
        }
    }

    if(flag) cout << "NO" << endl;

    return 0;
}
