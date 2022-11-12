#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n == 1)
        {
            cout << n << endl;
            cout << 1 << " " << 2 << endl;
        }
        else
        {
            cout << n - 1 << endl;
            string s = "";
            for (int i = 0; i < n; i++)
            {
                s = s + "BAN";
            }
            vector<pair<int, int> > array(n);
            for (int i = 1; i <= n - 1; i++)
            {
                array[i].first = 3 * i - 1;
                array[i].second = 0;
            }
            int j = n - 1;
            int k = 3 * n;
            while (j != 0)
            {
                array[j].second = k;
                k = k - 2;
                j--;
            }
            for (int i = 1; i <= n - 1; i++)
            {
                cout << array[i].first << " " << array[i].second << endl;
            }
            for (int i = 1; i <= n - 1; i++)
            {
                swap(s[array[i].first - 1], s[array[i].second - 1]);
            }
            cout << s << endl;
        }
    }
    return 0;
}