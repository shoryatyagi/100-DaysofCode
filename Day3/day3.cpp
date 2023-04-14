#include<iostream>
using namespace std;

//? Bitwise Operators = | & ~ ^ <<

int main(){
    int a,b;
    a = 4;
    b = 6;
    cout<< "a&b " << (a&b) << endl;
    cout<< "a|b " << (a|b) <<endl;
    cout<< "a^b " << (a^b) <<endl;
    cout<< "~a " << (~a) <<endl;
    cout << "a<<2 "<< (a<<2)<<endl;
    cout << "a>>2 "<< (a>>2)<<endl;

    int c = 1;
    int d = 1;
    
    if (c-- > 0 && ++d>2 ){
        cout << "Stage-1 inside";
            }
    else{
        cout << "Inside else";
    }
    cout<< "\n";
    cout<<c<<" "<<d<<endl;
}
