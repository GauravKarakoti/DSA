/*
    BRUTE FORCE
*/

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[4] = {2,7,11,15};
//     int target = 9;
//     for (int i=0; i<4; i++) {
//         for (int j=i+1; j<4; j++) {
//             if (arr[i] + arr[j] == target) {
//                 cout << arr[i] << " " << arr[j];
//             }
//         }
//     }
//     return 0;
// }

/*
    OPTIMAL - 2 Pointer Approach
*/

#include<iostream>
using namespace std;

int main()
{
    int arr[4] = {2,7,11,15};
    int target = 13;
    int i=0, j=3;
    while(i<j) {
        if (arr[i] + arr[j] == target) {
            cout << arr[i] << " " << arr[j];
            break;
        } else if (arr[i] + arr[j] > target) {
            j--;
        } else {
            i++;
        }
    }
    return 0;
}