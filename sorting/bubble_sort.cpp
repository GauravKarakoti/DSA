#include<iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int arr[] = {4,1,5,2,3};
    for(int i=5; i>0; i--) {
        bool isSwap = false;
        for(int j=0; j<i-1; j++) {
            if(arr[j]>arr[j+1]) {
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }

        /*
            OPTIMIZATION: If swap is not performed in an inner loop, that means array is now sorted... thus we break the outer loop and show.
        */

        if(!isSwap) {
            break;
        }
    }
    for(int i=0; i<5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}