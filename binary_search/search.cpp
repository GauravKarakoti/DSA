/*
    Without Recursion
*/

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {-1, 0, 3, 4, 5, 9, 12};
    int target = -1;
    int i=0, j=6;
    while (i<=j) {
        /*
            Would overflow if i and j are INT_MAX
        */
        // int mid = (i+j)/2;

        /*
            Optimization
        */
        int mid = i + ((j-i)/2);
        if (arr[mid]>target) {
            j = mid-1;
        } else if(arr[mid]<target) {
            i = mid+1;
        } else {
            cout << "Found at: " << mid;
            return 0;
        }
    }
    cout << "Not Found";
    return 0;
}

/*
    With Recursion
*/

// #include<iostream>
// using namespace std;

// int binary_search(int arr[], int target, int start, int end) {
//     if (start<=end) {
//         int mid = start + ((end - start)/2);
//         if (arr[mid] < target) {
//             return binary_search(arr, target, mid+1, end);
//         } else if(arr[mid] > target) {
//             return binary_search(arr, target, start, mid-1);
//         } else {
//             return mid;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int arr[] = {-1, 0, 3, 4, 5, 9, 12};
//     int target = -11;
//     int index = binary_search(arr, target, 0, 6);
//     if (index == -1) {
//         cout << "Not Found";
//     } else {
//         cout << "Found at: " << index;
//     }
//     return 0;
// }