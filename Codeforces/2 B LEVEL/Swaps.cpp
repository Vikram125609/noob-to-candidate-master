#include<iostream>
#include<vector>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> a(n,0);
    vector<int> b(n,0);
    int value;
    for(int i = 0;i < n; i++) {
        cin >> value;
        a[i] = value;
    }
    for(int i = 0;i < n; i++) {
        cin >> value;
        b[i] = value;
    }
    if(a[0] < b[0]) {
        cout << 0 << endl;
        return;
    }
    else {
        int firsta = a[0];
        int firstb = b[0];
        int index1 = -1;
        int index2 = -1;
        for(int i = 0;i < n; i++) {
            if(a[i] < firstb) {
                index1 = i;
                break;
            }
        }
        for(int i = 0;i < n; i++) {
            if(firsta < b[i]) {
                index2 = i;
                break;
            }
        }
        cout << min(index1,index2) << endl;
        return;
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}