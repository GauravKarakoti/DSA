#include<iostream>
using namespace std;

int main()
{
    int rows, count = 1;
    cout << "Enter the no. of rows";
    cin >> rows;
    for (int i =1; i<=rows;i++) {
        for (int j=1;j<=rows;j++) {
            if (i>=j) {
                cout << count;
                count++;
            }
        }
        cout << endl;
    }
    return 0;
}