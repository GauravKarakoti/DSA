#include<iostream>
using namespace std;

int main()
{
    int dec, binary = 0, pow=1;
    cout << "Enter decimal number: ";
    cin >> dec;
    while (dec>0) {
        int bin = dec%2;
        binary += (bin * pow);
        dec /= 2;
        pow *= 10;
    }
    cout << binary;
    return 0;
}