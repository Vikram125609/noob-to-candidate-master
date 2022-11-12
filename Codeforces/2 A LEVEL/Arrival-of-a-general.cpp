#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int maxi = INT_MIN;
    int maxInd = 0;
    int mini = INT_MAX;
    int minInd = 0;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
        maxi = max(maxi, array[i]);
        mini = min(mini, array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (array[i] == maxi)
        {
            maxInd = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (array[i] == mini)
        {
            minInd = i;
            break;
        }
    }
    if (maxInd < minInd)
    {
        cout << maxInd + n - 1 - minInd << endl;
    }
    else
    {
        cout << maxInd + n - 2 - minInd << endl;
    }
    return 0;
}