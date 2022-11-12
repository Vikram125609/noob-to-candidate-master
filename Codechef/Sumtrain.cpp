#include <iostream>
using namespace std;

int main()
{
    int testcase;
    int maxi;
    int long long N;
    int long long sum;
    cin >> testcase;
    while (testcase--)
    {
        maxi = INT_MIN;
        sum = 0;
        cin >> N;
        int array[N][N];
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cin >> array[i][j];
            }
        }
        for (int i = 0; i < N; i++)
        {
            maxi = INT_MIN;
            for (int j = 0; j <= i; j++)
            {
                maxi = max(maxi, array[i][j]);
            }
            sum = sum + maxi;
        }
        if(N == 1)
        {
            cout<<array[0][0]<<endl;
        }
        else
        {
            cout << sum - array[0][0] << endl;
        }
    }
    return 0;
}