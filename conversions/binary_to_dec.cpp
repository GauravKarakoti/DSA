#include<iostream>
using namespace std;

int main()
{
    int binary, dec = 0, pow = 1;
    cout << "Enter the binary number: ";
    cin >> binary;
    while (binary>0) {
        int rem = binary%10;
        if (rem == 1) {
            dec += (rem*pow);
        }
        pow *= 2;
        binary /= 10;
    }
    cout << dec;
    return 0;
}