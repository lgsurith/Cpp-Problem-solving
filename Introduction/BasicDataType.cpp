/*Some C++ data types, their format specifiers, and their most common bit widths are as follows:

Int ("%d"): 32 Bit integer
Long ("%ld"): 64 bit integer
Char ("%c"): Character type
Float ("%f"): 32 bit real value
Double ("%lf"): 64 bit real value*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long int longint1;
    char c;
    float d;
    double e;
    scanf("%d %ld %c %f %lf",&a ,&longint1 ,&c ,&d ,&e);
    printf("%d\n", a);
    printf("%ld\n", longint1);
    printf("%c\n", c);
    printf("%f\n", d);
    printf("%lf\n", e);
    return 0;
}

//using scanf and printf is faster than cin and cout
