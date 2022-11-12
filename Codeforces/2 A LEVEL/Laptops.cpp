#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int long long n;
    cin >> n;
    int long long array[n][2];
    int long long minprice = INT_MAX;
    int long long maxprice = INT_MIN;
    int long long maxquality = INT_MIN;
    int long long  minquality = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i][0];
        cin >> array[i][1];
        minprice = min(minprice, array[i][0]);
        maxprice = max(maxprice, array[i][0]);
        maxquality = max(maxquality, array[i][1]);
        minquality = min(minquality, array[i][1]);
    }
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (array[i][0] == minprice)
        {
            if (array[i][1] > minquality)
            {
                flag = false;
                cout << "Happy Alex" << endl;
                break;
            }
        }
        if (array[i][1] == maxquality)
        {
            if (array[i][0] < maxprice)
            {
                flag = false;
                cout << "Happy Alex" << endl;
                break;
            }
        }
    }
    if (flag)
    {
        cout << "Poor Alex" << endl;
    }

    return 0;
}