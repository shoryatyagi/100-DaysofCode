//todo  using if , else condition and while , for loop in c++

#include <iostream>
using namespace std;

/*
int main() {
    //? Checking if the number is positive or negative

    int num;
    cout << "Enter the number ";
    cin >> num;

    if (num < 0) {
        cout << "The number is negative.";
    }
    else if (num == 0) {
        cout << "The number is zero.";
    }
    else if (num>0){
        cout << "The number is greater than zero.";
    }

    return 0;

}
*/


/*
int main() {
    // ? printing sum of first n natural numbers
    int num;
    cout<< "Enter the limiting value of the first n natural ";
    cin >> num;
    int result = 0 ;

    for (int i = 0; i <=num; i++) {
        result+=i;
    }
    cout << "The result of "<< num <<"natural numbers is "<< result;
}
*/


/*
    // ? Checking if the number is prime or not 
int main() {
    int num;
    cin>>num;

    int num2 = 2;
    int count = 0;
    while(num2<num){

        if (num%num2 == 0){
            num2++;
        }

        else{
            count++;
            num2++;
        }

    }
    if (count==0){
        cout << "Prime Number";
    }
    else{
        cout << "Not Prime Number";
    }
     
}
*/


/*
// ! Printing square pattern using loop
int main() {

    int i = 0;
    int num = 4;
    while(i<num){
        int k =0;

        while(k<num){
            cout<< "*";
            k++;
        }
    cout << "\n";
    i++;
    }

}
*/

/*
// ! Printing the number 1 pattern using loop

int main() {

    int i = 1;
    int num = 4;

    while(i<num){
        int k = 1;
        while(k<num){
            cout<< i ;
            k++;
        }
    cout<< "\n";
    i++;
    }

}    
*/
// ! Printing the number pattern 2 using loop

int main() {

    int i = 1;
    while(i<5){
        int j = 1;
        while(j<5){
            cout<< j ;
            j++ ;
        }
        cout<< "\n";
        i++ ;

    }
    




}