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