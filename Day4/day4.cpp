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

/*
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
*/

/*
//! Finding the nth term of the A.P.

int nth_term(int n){
    int result = 3*n+7;
    return result;
}

int main(){
    cout<< "Enter the value of n "; 
    int n;
    cin>> n;
    int ans = nth_term(n);
    cout<< "Answer of nth_term : " << ans << endl;

}
*/

/*
// ! Finding the nth term of the fibonacci series
int fibonacci_term(int n){
    int a = 0;
    int b = 1;

    cout << a<<" "<<b <<" ";
    for (int i = 1; i <=n-2; i++){
        int next_no = a+ b;
        cout << next_no <<" ";

        a = b;
        b= next_no;
        if (i == n-2){
            return next_no;
        }
    }
}

int main(){
    cout<< "Enter the value of n "; 
    int n;
    cin>> n;

    int ans = fibonacci_term(n);
    cout<< "Answer of nth_term : " << ans << endl;

}
*/
// variable in function and outside the function definition
int update(int a){
    int ans = a* a;
    return ans;
}

int main(){
    int a = 15;
    a = update(a);
    cout<<a <<endl;
}
