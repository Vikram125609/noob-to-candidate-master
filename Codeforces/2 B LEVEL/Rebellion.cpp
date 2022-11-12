#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t, n, e, j, count;
    cin >> t;
    while (t--)
    {
        cin >> n;
        count = 0;
        vector<int> array(n);
        for (int i = 0; i < n; i++)
        {
            cin >> e;
            array[i] = e;
        }
        for (int i = 0; i < n; i++)
        {
            if (array[i] == 0)
            {
                continue;
            }
            j = n - 1;
            while (i < j)
            {
                if (array[j] == 0)
                {
                    array[j] = 1;
                    count++;
                    array[i] = -1;
                    break;
                }
                j--;
            }
        }
        cout << count << endl;
    }
    return 0;
}