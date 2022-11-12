#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main()
{
    int testcase;
    cin >> testcase;
    int n;
    while (testcase--)
    {
        cin >> n;
        int array[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        map<int, int> mp;
        vector<int> array1;
        vector<int> array2;
        for (int i = 0; i < n; i++)
        {
            mp[array[i]] += 1;
        }
        map<int, int>::iterator it;
        bool flag1 = true;
        for (it = mp.begin(); it != mp.end(); it++)
        {
            if ((*it).second == 0)
            {
                continue;
            }
            else if ((*it).second >= 2)
            {
                array1.push_back((*it).first);
            }
            else
            {
                if (flag1)
                {
                    array2.push_back((*it).first);
                    flag1 = false;
                }
                else
                {
                    array1.push_back((*it).first);
                    flag1 = true;
                }
            }
        }
        if (array1.size() == array2.size())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}