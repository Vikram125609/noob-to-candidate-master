#include<iostream>
#include<math.h>
using namespace std;
string solve() {
    int n;
    cin >> n;
    for(int i = 2;i <= sqrt(n); i++) if(n % i == 0) return "no";
    return "yes";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--) cout << solve() << endl;
    return 0;
}