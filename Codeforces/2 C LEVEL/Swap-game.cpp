#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t, n, e;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> array(n);
        int count_even = 0;
        int count_odd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> e;
            array[i] = e;
            if (e % 2 == 0)
            {
                count_even++;
            }
            else
            {
                count_odd++;
            }
        }
        if(count_even > count_odd)
        {
            cout << "Alice" << endl;
        }
        else if(count_even < count_odd)
        {
            cout << "Bob" << endl;
        }
        else
        {
            if(n % 2 == 0)
            {
                cout << "Alice" << endl;
            }
            else
            {
                cout << "Bob" << endl;
            }
        }
    }
    return 0;
}