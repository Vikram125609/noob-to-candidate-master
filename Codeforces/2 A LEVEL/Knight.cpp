#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int a, b;
    while (t--)
    {
        cin >> a >> b;
        bool flag = false;
        for (int i = 1; i <= a; i++)
        {
            for (int j = 1; j <= b; j++)
            {
                if ((i + 2 <= a && j + 1 <= b) || (j + 2 <= b && i + 1 <= a) || (i + 2 <= a && j - 1 >= 1) || (i - 2 >= 1 && j + 1 <= b))
                {
                    continue;
                }
                else
                {
                    flag = true;
                    cout << i << " " << j << endl;
                    break;
                }
            }
            if (flag == true)
            {
                break;
            }
        }
        if (flag == false)
        {
            cout << a << " " << b << endl;
        }
    }

    return 0;
}