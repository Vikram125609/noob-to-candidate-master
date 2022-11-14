#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    string s;
    int long long count0, count1, countC1, countC0;
    int long long maxCountC1;
    int long long maxCountC0;
    while (t--)
    {
        count0 = 0;
        count1 = 0;
        countC1 = 0;
        countC0 = 0;
        maxCountC1 = INT_MIN;
        maxCountC0 = INT_MIN;
        cin >> n;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                count0++;
            }
            else
            {
                count1++;
            }
        }
        for (int i = 0; i < n ; i++)
        {
            if (s[i] == '1')
            {
                countC1++;
            }
            else
            {
                maxCountC1 = max(maxCountC1, countC1);
                countC1 = 0;
            }
        }
        maxCountC1 = max(maxCountC1, countC1);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                countC0++;
            }
            else
            {
                maxCountC0 = max(maxCountC0, countC0);
                countC0 = 0;
            }
        }
        maxCountC0 = max(maxCountC0, countC0);
        int long long ans1 = count0 * count1;
        int long long ans2 = pow(maxCountC0, 2);
        int long long ans3 = pow(maxCountC1, 2);
        cout << max(ans1, max(ans2, ans3)) << endl;
    }
    return 0;
}