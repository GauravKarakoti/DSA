#include<iostream>
using namespace std;

int main()
{
    int arr[6] = {1,0,2,3,4,5};
    int find, idx=-1;
    cout << "Enter the number to find: ";
    cin >> find;
    for (int i=0; i<6; i++) {
        if (arr[i] == find) {
            idx = i;
        }
    }
    if (idx!=-1) {
        cout << "Found at: " << idx;
    } else {
        cout << "Not found";
    }
    return 0;
}