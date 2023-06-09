#include<iostream>
using namespace std;

/*
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
*/

/*
//? Max and Min in array

int getMin(int arr[],int n){
    int min = INT32_MAX;
    for(int i = 0; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int getMax(int arr[],int n){
    int max = INT32_MIN;
    for(int i = 0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        // or max = max(max,num[i]);
        }
    }
    return max;
}

int main(){
    int size;
    cout<< "Enter the size : ";
    cin>>size;

    int num[100];
    for (int i = 0; i < size; i++){
        cin>>num[i];
    }

    cout << "Maximum Value : " << getMax(num,size) << endl;
    cout << "Minimum Value : " << getMin(num,size) << endl;
}
*/

/*
// ? linear search algorithm

bool linear_search(int arr[],int n,int key){
    for(int i = 0; i < n; i++){
        if(arr[i] == key)  return 1;
    }
    return 0;
}

int main(){
    int arr[10] = {0,-2,3,4,5,6,-4,8,-3,10};
    int key;
    cout<< "Enter the key you want to search : ";
    cin>> key;
    if (linear_search(arr,10,key)){
        cout << "Key is present !";
    }
    else{
        cout << "Key is not present !";
    }
}
*/
/*
//? Reversing an array

void printArray(int arr[],int n){
    for (int i = 0; i<n; i++){
        cout << arr[i] << " "; }
    cout << endl;
}

void swapArray(int arr[],int n){
    int start = 0;
    int end = n-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++ ;
        end --;     }
}

int main(){
    int arr[6] = {8,9,4,3,2,7};
    int brr[5] = {6,9,2,4,1};
    cout<< "Before Reversing : "<<endl;
    printArray(arr,6);
    printArray(brr,5);
    cout<< "After Reversing : "<<endl;
    swapArray(arr,6);
    swapArray(brr,5);
    printArray(arr,6);
    printArray(brr,5);
    
}
*/

/*
//? Swapping the alternate elements of the array

void printArray(int arr[],int n){
    for (int i = 0; i<n; i++){
        cout << arr[i] << " "; }
    cout << endl;
}
void Alter_element(int arr[],int n){
    for (int i = 0; i<n; i+=2){
        if (i+1< n){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int even[6] = {8,9,4,6,7,2};
    int odd[5] = {4,6,9,1,2};
    cout<< "Before Alternating : "<<endl;
    printArray(even,6);
    printArray(odd,5);
    cout<< "After Alternating : "<<endl;
    Alter_element(even,6);
    Alter_element(odd,5);
    printArray(even,6);
    printArray(odd,5);
}
*/
/*
//? binary search algorithm

int binary_search(int arr[], int size, int key) {

    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;

    while(start <= end) {
        if(arr[mid] == key) {
            return mid;
        }
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{ 
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    
    return -1;  
}
int main(){
    int even[6] = {2,8,9,18,19,27};
    int odd[5] = {1,3,5,7,9};
    int index = binary_search(even,6,19);
    cout<< "Element Found !"<<endl<<"index : "<< index << endl;
}
*/

//? Convert decimal into binary
int main() {
   int num[10];
   int input;
   cin>> input;
   int i = 0;
   while(input!=0){
        num[i] = input%2;
        input /=2;
        i++ ;
       }
    for(int j=i-1;j>=0;j--){
        cout<<num[j];
    }

    return 0;
}



