#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int K = N;
    vector<int> arr;
    vector<vector<int> > ans;
    int assure;
    while (N > 0)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> assure;
            arr.push_back(assure);
        }
        ans.push_back(arr);
        arr.clear();
        N--;
    }
    int count = 0;
    int i = 0;
    while (i < K)
    {
        if ((ans[i][0] == 1 && ans[i][1] == 1) || (ans[i][1] == 1 && ans[i][2] == 1) || (ans[i][0] == 1 && ans[i][2] == 1))
        {
            count++;
        }
        i++;
    }
    cout << count;
    return 0;
}