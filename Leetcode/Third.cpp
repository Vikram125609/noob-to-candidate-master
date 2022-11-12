#include <iostream>
#include <vector>
using namespace std;
void solve(string a, string b)
{
    string dummy = "";
    vector<string> array;
    for (int i = 0; i < a.size() - 1; i++)
    {
        for (int j = i; j < a.size();j++)
        {
            dummy = "";
            for (int k = i; k <= j; k++)
            {
                dummy += a[k];
            }
            array.push_back(dummy);
        }
    }
}
int main()
{
    solve("aaffhkksemckelloe", "fhea");
    return 0;
}