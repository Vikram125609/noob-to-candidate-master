#include<iostream>
#include<vector>
using namespace std;
void solve() {
    vector<vector<int> > matrix(2,vector<int>(2,0));
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    matrix[0][0] = a;
    matrix[0][1] = b;
    matrix[1][0] = c;
    matrix[1][1] = d;
    if(( (matrix[0][0] < matrix[0][1]) && (matrix[0][1] < matrix[1][1])  && (matrix[0][0] < matrix[1][0]) && (matrix[1][0] < matrix[1][1]))) {
        cout << "Yes" << endl;
        return;
    }
    swap(matrix[0][1],matrix[1][1]);
    swap(matrix[0][0],matrix[0][1]);
    swap(matrix[0][0],matrix[1][0]);
    if(( (matrix[0][0] < matrix[0][1]) && (matrix[0][1] < matrix[1][1])  && (matrix[0][0] < matrix[1][0]) && (matrix[1][0] < matrix[1][1]))) {
        cout << "Yes" << endl;
        return;
    }
    swap(matrix[0][1],matrix[1][1]);
    swap(matrix[0][0],matrix[0][1]);
    swap(matrix[0][0],matrix[1][0]);
    if(( (matrix[0][0] < matrix[0][1]) && (matrix[0][1] < matrix[1][1])  && (matrix[0][0] < matrix[1][0]) && (matrix[1][0] < matrix[1][1]))) {
        cout << "Yes" << endl;
        return;
    }
    swap(matrix[0][1],matrix[1][1]);
    swap(matrix[0][0],matrix[0][1]);
    swap(matrix[0][0],matrix[1][0]);
    if(( (matrix[0][0] < matrix[0][1]) && (matrix[0][1] < matrix[1][1])  && (matrix[0][0] < matrix[1][0]) && (matrix[1][0] < matrix[1][1]))) {
        cout << "Yes" << endl;
        return;
    }
    cout << "No" << endl;
    return;
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