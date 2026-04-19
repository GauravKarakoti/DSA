#include<iostream>
using namespace std;

int main()
{
    int num, arr[3][3] = {1,2,3,4,5,6,7,8,9};
    cout << "Enter the number to search: ";
    cin >> num;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            if (arr[i][j] == num) {
                cout << "Found at: " << i << ',' << j << endl;
                return 0;
            }
        }
    }
    cout << "Not Found!!" << endl;
    return 0;
}