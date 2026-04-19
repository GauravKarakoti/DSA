#include<iostream>
using namespace std;

int main()
{
    int arr[3][3] = {6,1,6,1,2,7,9,8,-7}, maxSum = INT_MIN, sum=0;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            sum+=arr[i][j];
        }
        maxSum = max(sum, maxSum);
        sum = 0;
    }
    cout << maxSum;
    return 0;
}