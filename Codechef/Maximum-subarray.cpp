#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n, m, e;
    while (t--)
    {
        cin >> n >> m;
        vector<int> array1(n);
        vector<int> array2(m);
        for (int i = 0; i < n; i++)
        {
            cin >> e;
            array1[i] = e;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> e;
            array2[i] = e;
        }
        while (array2.size() != 0)
        {
            if (array2[0] > 0)
            {
            }
            else if (array2[array2.size() - 1] > 0)
            {
            }
        }
    }
    return 0;
}