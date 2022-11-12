#include <iostream>
#include <string>
#include <vector>
using namespace std;
string solution(string a, string b)
{
    string dummy;
    vector<string> arrayOfString;
    for (int i = 0; i <= a.size() - b.size(); i++)
    {
        dummy = "";
        for (int j = i; j < i + b.size(); j++)
        {
            dummy += a[j];
        }
        arrayOfString.push_back(dummy);
    }
    string ans;
    for(auto it : arrayOfString)
    {
        cout << it << endl;
    }
    for (int i = 0; i < arrayOfString.size(); i++)
    {
        string dummyA = arrayOfString[i];
        string dummyB = b;
        sort(dummyA.begin(), dummyA.end());
        sort(dummyB.begin(), dummyB.end());
        if (dummyA == dummyB)
        {
            ans = arrayOfString[i];
        }
    }
    return ans;
}
int main()
{
    cout << solution("aaffhkksemckelloe", "fhea");
    return 0;
}