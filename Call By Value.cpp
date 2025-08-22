/*Name : Dhakshayini Usha R
PRN : 24070123039
ENTC A2
*/
#include <iostream>
using namespace std; 
int swap(int x, int y){
    int swap;
    swap = x;
    x = y;
    y = swap;
  // Swaps the value of x and y becasue it is in same scope
    cout<<"Value of swap in fn "<< x<<endl;
    cout<<"Value of swap in fn "<< y<<endl;
    return x,y;
}

int main() {
    // Call by Value
    int a = 5, b = 2;
    swap(a,b);
    cout<<"----Calling swap fn in main---"<<endl;
    cout<<"Value of a is "<<a<<endl;
    cout<<"Value of b is "<<b<<endl;
  // Value of a and b is not swapped as the variables are defined locally, if it was global, value will be updated
    return 0;
}

/*
Sample Output: 
Value of swap in fn 2
Value of swap in fn 5
----Calling swap fn in main---
Value of a is 5
Value of b is 2
*/
