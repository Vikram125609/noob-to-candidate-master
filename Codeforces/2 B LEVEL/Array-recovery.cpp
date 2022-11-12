#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int testcase;
    cin >> testcase;
    int n;
    int element;
    while (testcase--)
    {
        cin >> n;
        vector<int> dummy(n);
        vector<int> array(n);
        for (int i = 0; i < n; i++)
        {
            cin >> element;
            dummy[i] = element;
        }
        bool flag = false;
        array[0] = dummy[0];
        for (int i = 1; i < n; i++)
        {
            if (array[i - 1] + dummy[i] == array[i - 1] - dummy[i] || array[i - 1] - dummy[i] < 0)
            {
                array[i] = array[i - 1] + dummy[i];
            }
            else
            {
                flag = true;
                cout << -1 << endl;
                break;
            }
        }
        if (flag == false)
        {
            for (int i = 0; i < n; i++)
            {
                cout << array[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}