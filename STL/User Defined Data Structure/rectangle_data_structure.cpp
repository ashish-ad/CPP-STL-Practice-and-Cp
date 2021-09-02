#include <bits/stdc++.h>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
    char x;
}r2; //This also a way to declare the variable of the user defined data structure and the variable r2 will be a global variable.

int main(){
    struct Rectangle r1 = {10,5}; //This is a way 
    cout<<sizeof(r1)<<endl; // here the char is present in structure rectangle so the char take 1 byte which adds upto 9 bytes but when we try to print sizeof the rectangle we get size as 12 byte ----> this is because it is easy for the compiler and system to assign 4 bytes of data to the strucuture. This is called as memory Padding.
    cout<<r1.length<<"\t"<<r1.breadth<<endl;
    return 0;
}