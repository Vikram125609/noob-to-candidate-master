#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int wina, winb, draw = 0;
    for (int i = 1; i <= 6; i++)
    {
        int diff1 = abs(i - a);
        int diff2 = abs(i - b);
        if(diff1 > diff2)
        {
            winb++;
        }
        else if(diff1 < diff2)
        {
            wina++;
        }
        else
        {
            draw++;
        }
    }
    cout << wina << " " << draw << " " << winb << endl;
    return 0;
}