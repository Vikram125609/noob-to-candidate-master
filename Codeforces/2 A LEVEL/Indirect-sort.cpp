#include <iostream>
#include <vector>
using namespace std;
void solve()
{
    int n, e;
    cin >> n;
    vector<int> array(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> e;
        array[i] = e;
    }
    if(array[0] == 1) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}