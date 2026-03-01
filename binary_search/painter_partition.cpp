#include<iostream>
using namespace std;

bool isValid(int arr[], int mid, int painter) {
    int count = 1;
    int sum=0;
    for (int i=0; i<4; i++) {
        if (sum+arr[i] <= mid) {
            sum+=arr[i];
        } else {
            sum = arr[i];
            count++;
        }
    }
    if (count <=painter) {
        return true;
    } else {
        return false;
    }
}

int binary(int arr[], int start, int end, int painter, int ans) {
    int mid = start + ((end-start)/2);
    if(start<=end) {
        if (isValid(arr, mid, painter)) {
            ans = min(ans, mid);
            return binary(arr, start, mid-1, painter, ans);
        } else {
            return binary(arr, mid+1, end, painter, ans);
        }
    }
    return ans;
}

int main()
{
    int arr[] = {40, 30, 10, 20};
    int painter = 2;
    int range_end = 0;
    for (int i=0; i<4; i++) {
        range_end += arr[i];
    }
    int ans = range_end;
    cout << binary(arr, 0, range_end, painter, ans);
    return 0;
}