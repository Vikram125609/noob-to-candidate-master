#include<iostream>
#include<vector>
using namespace std;
void solve() {
    int k,n;
    cin >> k >> n;
    int limit = n;
    int size = k;
    vector<int> array;
    int i = 1;
    int j = 1; 
    while(1) {
        if(k == array.size()) break;
        array.push_back(i);
        n = n - i; 
        i = i + j;
        j++;
    }
    i = 0;
    for(i = 0;i < array.size();i++) {
        if((size - i - 1) > (limit - array[i])) break;
    }
    for(int j = i;j < array.size();j++) {
        array[j] = array[j-1] + 1;
    }
    for(int i = 0;i < array.size(); i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}