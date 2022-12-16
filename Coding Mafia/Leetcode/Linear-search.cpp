#include<iostream>
using namespace std;
int main()
{
    int array[] = {1,2,3,4,5,6,7,8,9};
    for(int i = 0;i < 9;i++) if(array[i] == 7) cout << i << endl;
    return 0;
}