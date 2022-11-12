#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n;
    int k;
    int element;
    int sum = 0;
    while (t--)
    {
        cin >> n;
        cin >> k;
        int maxi = INT_MIN;
        vector<int> array(n);
        vector<int> array1;
        vector<int> array2;
        for (int i = 0; i < n; i++)
        {
            cin >> element;
            array[i] = element;
        }
        for (int i = 0; i < n; i++)
        {
            if (array[i] % k == 0)
            {
                array1.push_back(array[i]);
            }
            else
            {
                array2.push_back(array[i]);
            }
        }
        for (int i = 0; i < array1.size() - k + 1; i++)
        {
            sum = 0;
            for (int j = i; j < i + k; j++)
            {
                sum += array1[i];
            }
            maxi = max(maxi, sum);
        }
        for (int i = 0; i < array2.size() - k + 1; i++)
        {
            sum = 0;
            for (int j = i; j < i + k; j++)
            {
                sum += array2[i];
            }
            maxi = max(maxi, sum);
        }
        cout << maxi << endl;
    }
    return 0;
}