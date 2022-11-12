#include <iostream>
using namespace std;
int main()
{
    int n1;
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        cin >> n1;
        int arr[n1];
        for (int i = 0; i < n1; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n1 - 1; i++)
        {
            for (int j = i + 1; j < n1; j++)
            {
                if (arr[i] >= arr[j])
                {
                    arr[i] = arr[i] - arr[j];
                    arr[j] = 0;
                }
                else
                {
                    arr[j] = arr[j] - arr[i];
                    arr[i] = 0;
                }
            }
        }
        for (int i = 0; i < n1; i++)
        {
            if (arr[i] != 0)
            {
                cout << i + 1 << endl;
            }
        }
    }
    return 0;
}