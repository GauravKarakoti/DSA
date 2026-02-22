#include<iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the no. of rows";
    cin >> rows;
    for (int i =1; i<=rows;i++) {
        // int k = i;
        // for (int j=1;j<=rows;j++) {
        //     if (i>=j) {
        //         cout << k;
        //         k--;
        //     }
        // }
        for (int j=i; j>0; j--) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}