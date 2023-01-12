// Jai Shree Raam....
#include <iostream>
#include <vector>
using namespace std;
void solve()
{
    int n, e;
    cin >> n;
    vector<int> array(n);
    for (int i = 0; i < n; i++)
    {
        cin >> e;
        array[i] = e;
    }
    sort(array.begin() + 1, array.end());
    for (int i = 1; i < n; i++)
    {
        if (array[0] >= array[i])
            continue;
        int a = array[i] - array[0];
        if (a % 2 != 0)
        {
            a = a / 2;
            a = a + 1;
        }
        else
        {
            a = a / 2;
        }
        array[0] += a;
    }
    cout << array[0] << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}