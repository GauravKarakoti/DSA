#include<iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the no. of rows";
    cin >> rows;
    for (int i =1; i<=rows;i++) {
        for (int j=1; j<=(rows*2)-1;j++) {
            if (i==(rows-j+1) || j==(rows+i-1)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i =2; i<=rows;i++) {
        for (int j=1; j<=(rows*2)-1;j++) {
            if (i==j || j==(rows*2)-i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}