#include <iostream>
#include <vector>
using namespace std;
void solve()
{
    int n, e;
    cin >> n;
    int count2 = 0;
    vector<int> array;
    for (int i = 0; i < n; i++)
    {
        cin >> e;
        array.push_back(e);
        if (e == 2)
        {
            count2++;
        }
    }
    if (count2 % 2 != 0)
    {
        cout << -1 << endl;
        return;
    }
    count2 = count2 / 2;
    int count1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == 2)
        {
            count1++;
        }
        if (count1 == count2)
        {
            cout << i + 1 << endl;
            return;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}