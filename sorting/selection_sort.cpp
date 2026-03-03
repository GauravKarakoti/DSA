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
    for(int i=0; i<5; i++) {
        int min = i;
        for(int j=i+1; j<5; j++) {
            if(arr[min]>arr[j]) {
                min = j;
            }
        }
        if (i != min) {
            swap(arr[i], arr[min]);
        }
    }
    for(int i=0; i<5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}