#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int long long t, n, e;
    cin >> t;
    int long long positive;
    int long long negative;
    while (t--)
    {
        cin >> n;
        vector<int> array(n);
        positive = 0;
        negative = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> e;
            array[i] = e;
        }
        for (int i = 0; i < n;i++)
        {
            if(array[i] > 0)
            {
                positive += array[i];
            }
            else
            {
                negative += abs(array[i]);
            }
        }
        cout << abs(positive - negative) << endl;
    }
    return 0;
}