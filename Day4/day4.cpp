#include<iostream>
using namespace std;


/*
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
*/

/*
//! checking even or odd using function
bool isEven(int a ){
    if (a&1){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int num;
    cin >> num;
    
    if (isEven(num)){
        cout<< "The number is even"<<endl;

    }
    else{
        cout<< "The number is odd"<<endl;
    }
}
*/

//! Finding nCr using function

int nCr(int n , int r){


    int num = 1;
    for (int i = 1; i <=n; i++){
        num *= i;
    
    }
    int deno = 1;
    for (int j = 1; j <=r; j++){
        deno *= j;
         }
    for(int k =1 ; k <= n-r; k++){
        deno *= k;
    }
    int ans = num/deno;
    return ans;
}

int main(){
    int n, r;
    cout<< "Enter the value of n : ";
    cin >> n ;
    cout << endl;

    cout<< "Enter the value of r : ";
    cin >> r;
    cout << endl;

    int result = nCr(n,r);
    cout<< "Answer of nCr : " << result << endl;
}