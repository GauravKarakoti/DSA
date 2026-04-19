/*
    O(n^2)
*/

// #include<iostream>
// using namespace std;

// int main()
// {
//      int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
//     int sum = 0;
//     for(int i=0; i<4; i++) {
//         for(int j=0; j<4; j++) {
//             if (i==j || i+j==3) {
//                 sum += arr[i][j];
//             }
//         }
//     }
//     cout << sum;
//     return 0;
// }

/*
    O(n)
*/

#include<iostream>
using namespace std;

int main()
{
     int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int sum = 0;
    for(int i=0; i<4; i++) {
        sum+=arr[i][i];
        if (i!=4-i-1 || i+(4-i-1)==3) {
            sum += arr[i][4-i-1];
        }
    }
    cout << sum;
    return 0;
}