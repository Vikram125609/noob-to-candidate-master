#include <iostream>
#include <map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n1;
    int n2;
    while (t--)
    {
        cin >> n1;
        int array1[n1];
        for (int i = 0; i < n1; i++)
        {
            cin >> array1[i];
        }
        cin >> n2;
        int array2[n2];
        for (int i = 0; i < n2; i++)
        {
            cin >> array2[i];
        }
        map<int, int> mp;
        for (int i = 0; i < n2; i++)
        {
            mp[array2[i]] += 1;
        }
        for (int i = 0; i < n1; i++)
        {
            if (mp[array1[i]] >= 1)
            {
                array1[i] = 0;
            }
        }
        for (int i = 0; i < n1; i++)
        {
            if (array1[i] != 0)
            {
                cout << array1[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}