/*Name : Dhakshayini Usha R
PRN : 24070123039
ENTC A2
*/
#include <iostream>
using namespace std; 
void swap(int &x, int &y){
    //Value is taken as address of a and b
    int swap;
    swap = x;
    x = y;
    y = swap;
    cout<<"Value of swap in fn "<< x <<endl;
    cout<<"Value of swap in fn "<< y <<endl;
}

int main() {
    // Pass by Referecne
    int a = 5, b = 2;
    swap(a,b);
    // Value of a and b is passed
    cout<<"----Calling swap fn in main---"<<endl;
    cout<<"Value of a is "<<a<<endl;
    cout<<"Value of b is "<<b<<endl;
    return 0;
}

/*
Sample Output : 
Value of swap in fn 2
Value of swap in fn 5
----Calling swap fn in main---
Value of a is 2
Value of b is 5
*/



