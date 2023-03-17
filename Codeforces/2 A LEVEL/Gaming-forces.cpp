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
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(array[i] == 1) {
            count++;
        }
    }
    int ans = 0;
    if (count % 2 == 0)
    {
        ans += count / 2 + (array.size() - count);
    }
    else 
    {
        ans += count / 2 + (array.size() - count) + 1;
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}