#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1,0,2,3,4};
    int size=5;
    for (int i=0; i<=size/2; i++) {
        int temp = arr[size-i-1];
        arr[size-i-1] = arr[i];
        arr[i] = temp;
    }
    for (int i=0; i<5; i++) {
        cout << arr[i];
    }
    return 0;
}