#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n, c, e;
    while (t--)
    {
        int sum = 0;
        cin >> n >> c;
        vector<int> array(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> e;
            array[i] = e;
            mp[array[i]] += 1;
        }
        for (auto it : mp)
        {
            sum += min(it.second,c);
        }
        cout << sum << endl;
    }
    return 0;
}