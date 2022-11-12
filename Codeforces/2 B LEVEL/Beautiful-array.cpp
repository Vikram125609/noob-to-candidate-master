#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int long long t;
    cin >> t;
    while (t--)
    {
        int n, k, b, s;
        cin >> n >> k >> b >> s;
        vector<int> array(n, 0);
        array[n - 1] = b * k;
        if (array[n - 1] > s)
        {
            cout << -1 << endl;
        }
        else if (array[n - 1] == s)
        {
            for (int i = 0; i < array.size(); i++)
            {
                cout << array[i] << " ";
            }
            cout << endl;
        }
        else
        {
            int differ = s - b * k;
            if (differ < k)
            {
                array[n - 1] += differ;
                for (int i = 0; i < array.size(); i++)
                {
                    cout << array[i] << " ";
                }
                cout << endl;
            }
            else
            {
                array[n - 1] += k - 1;
                int long long sum = 0;
                for (int i = n - 1; i >= 0; i--)
                {
                    sum = sum + array[i];
                    if (sum == s)
                    {
                        break;
                    }
                    else
                    {
                        differ = s - sum;
                        if (differ < k)
                        {
                            array[i - 1] = differ;
                        }
                        else
                        {
                            sum = sum + k - 1;
                            array[i - 1] = k - 1;
                        }
                    }
                }
                int long long summation = 0;
                for (int i = 0; i < array.size(); i++)
                {
                    summation += array[i];
                }
                if (summation == s)
                {
                    for (int i = 0; i < array.size(); i++)
                    {
                        cout << array[i] << " ";
                    }
                    cout << endl;
                }
                else
                {
                    cout << -1 << endl;
                }
            }
        }
    }
    return 0;
}