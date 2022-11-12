#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    int element;
    while (t--)
    {
        cin >> n;
        vector<int> array(n, 0);
        vector<int> array1;
        vector<int> array2;
        for (int i = 0; i < array.size(); i++)
        {
            cin >> element;
            array[i] = element;
        }
        int i = 0;
        int j = array.size() - 1;
        while (i < j)
        {
            if (i == j)
            {
                array1.push_back(array[i]);
                break;
            }
            array1.push_back(array[i++]);
            array2.push_back(array[j--]);
        }
        reverse(array2.begin(), array2.end());
        if (array1[0] > array2[0])
        {
            cout << -1 << endl;
        }
        else
        {
            cout << array1.size() << endl;
            for (int i = 0; i < array1.size(); i++)
            {
                cout << array1[i] << " ";
            }
            cout << endl;
            cout << array2.size() << endl;
            for (int i = 0; i < array2.size(); i++)
            {
                cout << array2[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}