#include <iostream>
using namespace std;
int main()
{
    int n;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int maxi = INT_MIN;
        int array[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        for (int i = 1; i < n; i++)
        {
            maxi = max(maxi, array[i] - array[0]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            maxi = max(maxi, array[n - 1] - array[i]);
        }
        for (int i = 1; i < n; i++)
        {
            maxi = max(maxi, array[i - 1] - array[i]);
        }
        maxi = max(maxi, array[n - 1] - array[0]);
        cout << maxi << endl;
    }
    return 0;
}