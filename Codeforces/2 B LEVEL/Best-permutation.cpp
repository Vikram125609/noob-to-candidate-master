#include <iostream>
#include <vector>
using namespace std;
void bestPermuatation(int n, vector<bool> &take, vector<int> &container, int &x)
{
    if (container.size() == n)
    {
        for (int i = 0; i < container.size(); i++)
        {
            cout << container[i] << " ";
        }
        cout << endl;
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (take[i - 1] == false)
        {
            if (x >= i)
            {
                continue;
            }
            x = x + i;
            take[i - 1] = true;
            container.push_back(i);
            bestPermuatation(n, take, container, x);
            x = x - i;
            take[i - 1] = false;
        }
    }
}
int main()
{
    int n, x;
    cin >> n;
    x = 0;
    vector<bool> take(n, false);
    vector<int> container;
    bestPermuatation(n, take, container, x);
    return 0;
}