#include<iostream>
using namespace std;

int main()
{
    int arr[6] = {1,0,2,3,4,5};
    int smallest = arr[0];
    int largest = arr[0];
    for (int i=0; i<6; i++) {
        if (arr[i]<smallest) {
            smallest = arr[i];
        } else if(arr[i]>largest) {
            largest = arr[i];
        }
    }
    cout << "Smallest: " << smallest << endl;
    cout << "Largest: " << largest;
    return 0;
}