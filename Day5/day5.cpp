#include<iostream>
using namespace std;


//? Array Initialization 
int main(){

    // ? Method 1
    int array0 [3] = {24,25,67};

    //? Method 2 for intializing all the elements with 1 value
    int array1 [4] = {0};
    
    int array2 [4] = {5};
    int array3 [4];
    for(int i = 0; i <4; i++){
        array3[i] = 5;
    }

    for(int i = 0; i <4;i++){
        int a = array1[i];
        cout << a << " ";
    }
    cout << endl;
    for(int i = 0; i <4;i++){
        int b = array2[i];
        cout << b << " ";
    }
    cout<< endl;
    for(int i = 0; i <4;i++){
        int c = array3[i];
        cout << c << " ";
    }
}

