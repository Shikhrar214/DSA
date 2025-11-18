#include <iostream>


int sumOfDigits(int& n){
    
    int sum = 0;
    
    while (n > 0)
    {
        int digit = n%10;

        sum += digit;
        n /= 10;
        
    }
    return sum;
}

int main(){
    int a = 1000;
    int sum = sumOfDigits(a);
    std::cout<<sum<<std::endl;
    return 0;
}