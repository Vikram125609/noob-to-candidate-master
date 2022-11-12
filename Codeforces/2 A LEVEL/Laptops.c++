#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, b;
    vector<vector<int> > array(n, vector<int>(2, 0));
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        array[i][0] = a;
        array[i][1] = b;
    }
    sort(array.begin(), array.end());
    bool flag = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (array[i][1] <= array[i + 1][1])
        {
            continue;
        }
        else
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "Poor Alex" << endl;
    }
    else
    {
        cout << "Happy Alex" << endl;
    }
    return 0;
}