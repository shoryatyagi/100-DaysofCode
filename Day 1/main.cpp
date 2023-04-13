// !Print in c++

#include<iostream>
using namespace std;



int main() {

    cout << "hello" << endl;
    cout << '\n';

    // ? Datatypes in c++

    int a = 1; // stores 4 bytes
    char b = 'a'; // stores 1 byte
    float c = 1.2; // stores 4 bytes
    double d = 1.32; // stores 8 bytes
    bool e = true; // stores 1 bit

    cout << a ;
    cout << " Size of a is " << sizeof(a);
    cout << '\n';

    cout << b ;
    cout << " Size of b is " << sizeof(b);
    cout << '\n';

    cout << c ;
    cout << " Size of c is " << sizeof(c);
    cout << '\n';

    cout << d ;
    cout << " Size of d is " << sizeof(d);
    cout << '\n';

    cout << e ;
    cout << " Size of e is " << sizeof(e);
    cout << "\n";

    // ! Type casting 

    int f = 'f';
    cout << "ASCII VALE OF f is "<< f << endl;

    char g = 103;
    cout << g << endl;

    char ch = 123456;
    cout << ch << endl;

    unsigned int positive = -112;  // ? printing between-( 0  2^32-1)
    cout << positive << endl;

    // ! Operators ------------------------
    /* todo

        Arithmetic operators = + - * / %  ++ --
        Logical operators = || && !
        Assignment operators = += -=  *= /= %= += &= |= 
        Comparison Operators = < > == != >= <=


    */

    cout << 2/5 << endl;
    cout << 10.0/3 << endl;
}