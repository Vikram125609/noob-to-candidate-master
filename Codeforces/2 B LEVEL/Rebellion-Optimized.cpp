#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t, n, e, c;
    cin >> t;
    while (t--)
    {
        cin >> n;
        c = 0;
        vector<int> array(n);
        for (int i = 0; i < n; i++)
        {
            cin >> e;
            array[i] = e;
        }
        int i = 0;
        int j = n - 1;
        while (i < j)
        {
            if (array[j] == 0 && array[i] == 1)
            {
                c++;
                array[i] = -1;
                array[j] = 1;
                i++;
                j--;
            }
            else if (array[i] == 0)
            {
                i++;
            }
            else if (array[j] == 1)
            {
                j--;
            }
        }
        cout << c << endl;
    }
    return 0;
}
