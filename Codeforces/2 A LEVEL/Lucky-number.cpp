#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int Array[] = {4, 44, 444, 7, 77, 777, 47, 74, 447, 474, 744, 747, 774, 477};
    int size = sizeof(Array) / sizeof(Array[0]);
    bool flag = false;
    for (int i = 0; i < size; i++)
    {
        if (n % Array[i] == 0)
        {
            cout << "YES" << endl;
            flag = true;
            break;
        }
    }
    if (flag == false)
    {
        cout << "NO" << endl;
    }
    return 0;
}