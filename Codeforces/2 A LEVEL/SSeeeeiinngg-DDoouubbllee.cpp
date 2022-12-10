#include<iostream>
using namespace std;
void solve() {
    string ans = "";
    string s;
    cin >> s;
    ans = ans + s;
    reverse(s.begin(),s.end());
    ans = ans + s;
    cout << ans << endl;

}
int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}