#include<iostream>
using namespace std;
void solve() {
    int a,b;
    char symbol;
    cin >> a >> symbol >> b;
    cout << a + b << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}