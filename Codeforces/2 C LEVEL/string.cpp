#include <iostream>
#include <string>
using namespace std;
char* solution(char str[], char c, int n)
{
    int count = 0;
    string ans = "";
    string a = "";
    for (int i = 0; i < n; i++)
    {
        a += c;
    }
    while (str[count] != '\0')
    {
        count++;
    }
    for (int i = 0; i < count / 2; i++)
    {
        ans += str[i];
    }
    ans += a;
    for (int i = (count / 2); i <= count; i++)
    {
        ans += str[i];
    }
    char finalAns[ans.size() + 1];
    for (int i = 0; i < ans.size() + 1; i++)
    {
        finalAns[i] = ans[i];
    }
    return finalAns;
}
int main()
{
    char str[100] = "abab";
    char c = 'd';
    int n = 5;
    char *ans = solution(str, c, n);
    return 0;
}