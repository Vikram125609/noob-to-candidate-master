#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        int first = n / 2 + 1;
        int second = n / 2;
        int array[n];
        array[0] = first;
        for (int i = 1; i < n; i++)
        {
            if (i % 2 == 0)
            {
                array[i] = array[i - 1] + first;
            }
            else
            {
                array[i] = array[i - 1] - second;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }
    return 0;
}