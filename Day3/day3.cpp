#include<iostream>
using namespace std;

/*
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
*/

// todo for loop in c++
/*
// ? printing counting from 1 to n
int main(){
    cout<< "Enter vale of n : ";
    int n;
    cin>>n;
    for (int i =1; i<=n; i++){
        cout << i<<endl;

    }

}
*/
/*
// ? multiple variable in for loop

int main(){
    for(int i =4,b=4; i>=0 && b>=1; i--,b--){

        cout << i << " " << b << endl;

    }
}
*/


//? fibonacci series
int main(){
    int n = 10;
    int a = 0;
    int b = 1;

    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
        int nextNumber = a+b;
        cout << nextNumber <<" ";

        a=b;
        b=nextNumber;
    }
}