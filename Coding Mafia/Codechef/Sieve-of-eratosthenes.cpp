#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
void soe(int n) {
    vector<int> prime(n,0);
    for(int i = 2;i < sqrt(n); i++) {
        if(prime[i] == 0) {
            for(int j = i * i;j < n; j+= i) {
                prime[j] = 1;
            }
        }
    }
    for(int i = 2;i < n; i++) {
        if(prime[i] == 0) cout << i << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    soe(n);
    return 0;
}