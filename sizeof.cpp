/* CPP PROGRAM TO FIND THE SIZE OF INT, FLOAT, DOUBLE & CHAR*/ 

#include <iostream>
using namespace std;

int main() 
{    
    //using sizeof() to calculate the size
    cout << "Size of char: "<< sizeof(char)<<" byte"<<endl;
    cout << "Size of int: "<< sizeof(int)<<" bytes"<<endl;   
    cout << "Size of float: "<< sizeof(float)<<" bytes"<<endl;
    cout << "Size of double: "<< sizeof(double)<<" bytes"<<endl;
    
    return 0;
}