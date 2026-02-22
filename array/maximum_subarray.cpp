/*
    BRUTE FORCE
*/

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[7] = {3, -4, 5, 4, -1, 7, -8};
//     int max_sum = 0;
//     for (int i=0; i<7; i++) {
//         for (int j=i; j<7; j++) {
//             int sum = 0;
//             for (int k=i; k<j; k++) {
//                 sum += arr[k];
//             }
//             if (sum>max_sum) {
//             max_sum = sum;
//         }
//         }
//     }
//     cout << max_sum;
//     return 0;
// }

/*
    Kadane's Algorithm
*/

#include<iostream>
using namespace std;

int main()
{
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    int curr_sum = 0, max_sum = 0;
    for (int i=0; i<7; i++) {
        curr_sum += arr[i];
        max_sum = max(curr_sum, max_sum);
        if (curr_sum < 0) {
            curr_sum = 0;
        }
    }
    cout << max_sum;
    return 0;
}