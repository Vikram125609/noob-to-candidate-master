#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    char a;
    cin >> t;
    while (t--)
    {
        vector<vector<char> > array(8, vector<char>(8, '0'));
        vector<int> dumrow(8, 0);
        vector<int> dumcol(8, 0);
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> a;
                array[i][j] = a;
            }
        }
        for (int i = 0; i < 8; i++)
        {
            int count = 0;
            for (int j = 0; j < 8; j++)
            {
                if (array[i][j] == 'R')
                {
                    count++;
                }
            }
            dumcol[i] = count;
        }
        for (int i = 0; i < 8; i++)
        {
            int count = 0;
            for (int j = 0; j < 8; j++)
            {
                if (array[j][i] == 'B')
                {
                    count++;
                }
            }
            dumrow[i] = count;
        }
        bool blue = false;
        bool red = false;
        for (int j = 0; j < 8;j++)
        {
            if(dumcol[j] == 8)
            {
                red = true;
            }
        }
        if(red)
        {
            cout << 'R' << endl;
        }
        else
        {
            cout << 'B' << endl;
        }
    }
    return 0;
}