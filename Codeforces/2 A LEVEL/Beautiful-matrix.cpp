#include <iostream>
using namespace std;
int main()
{
    int array[5][5];
    int row = 0;
    int col = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> array[i][j];
            if (array[i][j] == 1)
            {
                row = i;
                col = j;
            }
        }
    }
    int a = abs(row - 2) + abs(col - 2);
    cout << a << endl;
    return 0;
}