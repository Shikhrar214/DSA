#include<iostream>
#include<vector>

using namespace std;

void insertion (int arr[], int size){

    cout<<"\nEnter element in the array\n \n";
    for (int i = 0; i < 10; i++)
    {
       cin>> arr[i] ;  
    }
    cout <<"\n" << size << endl;
}

void For_Loop_traversal(int arr[], int size ) {
    for (int i = 0; i < size; i++)
    {
        cout<<"for_loop arr["<<i<<"] = "<<arr[i]<<endl;
    }
}


void While_Loop_traversal(int arr[], int size) {
    int i = 0;
    while (i < size)
    {
        cout<<"while_loop arr["<<i<<"] = "<<arr[i]<<endl;
        i+=1;
    }
}

void Linear_traversal_search_for_index(int arr[], int size, int n) {
   
    if(n>=size){
        cout<<"error"<<endl;
    }
    for (int i = 0; i < size; i++)
    {
      if (arr[i] == n)
      {
        cout<<"linear search for index arr["<<i<<"] = "<<arr[i]<<endl;
      }
        
    }
    
}

void Reverse_traversal(int arr[], int size) {
    for (int i = size-1; i >= 0; i--)
    {
        cout<<"reverse_traversal arr["<<i<<"] = "<<arr[i]<<endl;
    }
}


int main() {
    int arr[10] ;
    int size = sizeof(arr)/sizeof(arr[0]);
    
    // insertion in arr
    insertion(arr, size);


    
    
    // traversal using for loop 
    For_Loop_traversal(arr, size);

    // traversal using while loop
    While_Loop_traversal(arr, size);

    // Linear traversal
    int index;
    cout<<"enter index no."<<endl;
    cin>>index;
    Linear_traversal_search_for_index(arr, size, index);
    
    // Reverse traversal
    Reverse_traversal(arr, size);

    return 0;
}