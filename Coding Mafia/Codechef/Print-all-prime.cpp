// Jai Shree Ram

#include<iostream>
#include<math.h>
using namespace std;
void solve() {
    int n = 100;
    bool flag = false;
    for(int i = 2;i <= n;i++) {
        flag = false;
        for(int j = 2;j < i;j++) {
            if(i % j == 0) {
                flag = true;
                break;
            }
        }
        if(flag == false) cout << i << " ";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}