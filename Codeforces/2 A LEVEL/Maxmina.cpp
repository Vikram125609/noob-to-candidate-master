#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, e;
        cin >> n >> k;
        vector<int> array(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> e;
            array[i] = e;
            mp[e] += 1;
        }
        if(mp[1] >= 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}