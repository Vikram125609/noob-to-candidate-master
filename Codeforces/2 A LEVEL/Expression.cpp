#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int max1 = a + b + c;
    int max2 = a + b * c;
    int max3 = a * b + c;
    int max4 = a * b * c;
    int max5 = (a + b) * c;
    int max6 = a * (b + c);
    int result = max(max(max1, max2), max(max3, max4));
    result = max(result, max(max5, max6));
    cout << result << endl;
    return 0;
}