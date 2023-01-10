/*
An array is a series of elements of the same type placed in contiguous memory locations that can be individually referenced by adding an index to a unique identifier.

For arrays of a known size,  in this case, use the following declaration:

int arr[10]; //thereby declares an array of size 10;


Objective is to print the array in the reverse order 

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a;
    cin>>a;
    int arr[a];
    for (int i=0;i<a;i++){
        cin>>arr[i];
    }
    for (int j=a-1;j>=0;j--){
        cout<<arr[j]<<" ";
    }
    return 0;
}
