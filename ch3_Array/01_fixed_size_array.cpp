#include<iostream>
using namespace std;

int main(){

    // fixed size array
    // memory alloaction at compile time
    int arr[5] ; 
    int arr1[5] = {1,2,3,4,5};
    cout <<endl << arr[0]<< endl <<arr[1]<< endl << arr[2]<< endl <<arr[3]<< endl <<arr[4] <<endl ;
    cout <<endl << arr1[0]<< endl <<arr1[1]<< endl << arr1[2]<< endl <<arr1[3]<< endl <<arr1[4] <<endl ;

    // memory allocation at run time
    int *arr2 = new int[5];
    cout <<endl << arr2[0]<< endl <<arr2[1]<< endl << arr2[2]<< endl <<arr2[3]<< endl <<arr2[4] <<endl ;

    return 0;
}