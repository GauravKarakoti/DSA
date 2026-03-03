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
    for(int i=1; i<5; i++) {
        int curr = arr[i];
        int prev = i-1;
        while(prev!=-1 && arr[prev] > curr) {
            arr[prev+1] = arr[prev];
            prev--;
        } 
        arr[prev+1] = curr;
    }
    for(int i=0; i<5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}