#include<iostream>
using namespace std;

bool isValid(int arr[], int page, int student) {
    int count = 1;
    int sum = 0;
    for (int i=0; i<4; i++) {
        if (sum+arr[i] <= page) {
            sum += arr[i];
        } else {
            sum = arr[i];
            count ++;
        }
    }
    if (count<=student) {
        return true;
    } else {
        return false;
    }
}

int binary(int arr[], int ans, int start, int end, int student) {
    int mid = start + ((end-start)/2);
    if (start <= end) {
        if (isValid(arr, mid, student)) {
            ans = min(ans, mid);
            return binary(arr, ans, start, mid-1, student);
        } else {
            return binary(arr, ans, mid+1, end, student);
        }
    }
    return ans;
}

int main()
{
    int arr[] = {2,1,3,4};
    int student = 2;
    int range_end = 0;
    for(int i=0; i<4; i++) {
        range_end += arr[i];
    }
    int ans = range_end;
    cout << binary(arr, ans, 0, range_end, student);
    return 0;
}