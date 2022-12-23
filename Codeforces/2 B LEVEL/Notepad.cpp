
// Jai Shree Ramm

#include<iostream>
#include<map>
using namespace std;
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    if(n == 1) {
        cout << "No" << endl;
        return;
    }
    for(int i = 0;i < s.length() - 2; i++) {
        string a = "";
        a += s[i];
        a += s[i + 1];
        for(int j = i + 2;j < s.length() - 1; j++) {
            string b = "";
            b += s[j];
            b += s[j + 1];
            if(a == b) count++;
            if(count > 0) {
                cout << "Yes" << endl;
                return;
            }
        }
    }
    if(count > 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}