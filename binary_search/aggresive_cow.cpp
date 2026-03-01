#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isValid(vector<int> &arr, int mid, int cow) {
    int count = 1;
    int last_placed = arr.at(0);
    for(int i=1; i<arr.size(); i++) {
        if(arr.at(i) - last_placed >= mid) {
            count++;
            last_placed = arr.at(i);
        }
    }
    if(count == cow) {
        return true;
    } else {
        return false;
    }
}

int binary(vector<int> &arr, int start, int end, int ans, int cow) {
    int mid = start + ((end-start)/2);
    if (start<=end) {
        if(isValid(arr, mid, cow)) {
            ans = max(ans, mid);
            return binary(arr, mid+1, end, ans, cow);
        } else {
            return binary(arr, start, mid-1, ans, cow);
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1,2,8,4,9};
    int cows = 3;
    sort(arr.begin(), arr.end());
    int ans = 0;
    cout << binary(arr, arr.front(), arr.back(), ans, cows);
    return 0;
}