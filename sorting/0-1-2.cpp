/*
    OPTIMISED
*/

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {2,0,2,1,1,0,1,2,0,0};
//     int count0 =0, count1 = 0, count2=0;
//     for(int i=0; i<10; i++) {
//         if(arr[i] == 0) {
//             count0++;
//         } else if(arr[i]==1) {
//             count1++;
//         } else {
//             count2++;
//         }
//     }
//     for (int i=0; i<10; i++) {
//         if (count0 != 0) {
//             arr[i] = 0;
//             count0--;
//         } else if(count1 != 0) {
//             arr[i] = 1;
//             count1--;
//         } else {
//             arr[i] = 2;
//         }
//     }
//     for(int i=0; i<10; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

/*
    OPTIMAL - DUTCH NATIONAL FLAG ALGORITHM
*/

#include<iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int arr[] = {2,0,2,1,1,0,1,2,0,0};
    int low = 0, mid = 0, high = 9;
    while(mid<=high) {
        if(arr[mid]==0) {
            swap(arr[low], arr[mid]);
            mid++;
            low++;
        } else if(arr[mid] == 1) {
            mid++;
        } else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    for(int i=0; i<10; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}