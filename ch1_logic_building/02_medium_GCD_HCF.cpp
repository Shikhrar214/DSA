#include<iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}


int main(){
    int a, b;
    cout<<"Enter value of a and b" << endl;
    cin>>a >>b;
    
    int res = gcd(a, b); 
    cout<<endl<<res<<endl;
    return 0;
}