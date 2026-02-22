#include<iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the no. of rows";
    cin >> rows;
    for (int i =1; i<=rows;i++) {
        for (int j=1;j<=(rows*2)-1;j++) {
            for (int k=1; k<=(rows-i); k++) {
                cout << " ";
            }
            for (int k=1; k<=i; k++) {
                cout << k;
            }
            for (int k=i-1; k>=1; k--) {
                cout << k;
            }
            break;
        }
        cout << endl;
    }
    return 0;
}