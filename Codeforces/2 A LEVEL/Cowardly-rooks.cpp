#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n, m;
    int row, col;
    while (t--)
    {
        cin >> n >> m;
        vector<vector<int> > array(n, vector<int>(n, 0));
        for (int i = 0; i < m; i++)
        {
            cin >> row >> col;
            for (int j = 0; j < n; j++)
            {
                array[j][col-1] += 1;
            }
            for (int k = 0; k < n; k++)
            {
                array[row-1][k] += 1;
            }
            array[row-1][col-1] -= 1;
        }
        int countOne = 0;
        for (int i = 0; i < array.size(); i++)
        {
            for (int j = 0; j < array[i].size();j++)
            {
                if(array[i][j] == 1)
                {
                    countOne++;
                }
            }
        }
        if(countOne > m)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}