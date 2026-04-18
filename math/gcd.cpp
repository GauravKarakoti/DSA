/*
    BRUTE FORCE
*/

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a, b, gcd;
//     cout << "Enter a and b: ";
//     cin >> a >> b;
//     for(int i=1; i<=min(a,b); i++) {
//         if(a%i==0 && b%i==0) {
//             gcd = i;
//         }
//     }
//     cout << gcd;
//     return 0;
// }

/*
    EUCLID'S ALGORITHM
*/

#include<iostream>
using namespace std;

int gcd(int a, int b) {
    if(a==b) {
        return a;
    } else if(a>b) {
        return gcd(a-b, b);
    } else {
        return gcd(a, b-a);
    }
}

int main()
{
    cout << gcd(24, 20);
    return 0;
}

// LCM = a*b/gcd(a,b)