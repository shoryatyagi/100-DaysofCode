#include<iostream>
using namespace std;

// ? Mini calculator using switch case

int main(){
    int a,b;
    cout<< "Enter value of a : ";
    cin>> a;
    cout<< "Enter value of b : ";
    cin>> b;

    char operation;
    cout<< "Enter the operation you want to perform : ";
    cin>> operation;

    switch(operation){
        case'+':cout<< a+b<<endl; break;
        case'-': cout<< a-b<<endl;break;
        case '*': cout<< a*b<<endl;break;
        case '/': 
            if (b==0){
                cout<< "Not divisible by zero."<<endl;
                break;
            }
            else{
                cout<< a/b<<endl;
                break;}
        


    }
}