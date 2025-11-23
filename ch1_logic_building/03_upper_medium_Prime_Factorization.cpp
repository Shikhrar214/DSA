#include<iostream>
#include<vector>
using namespace std;

vector<int> primeFactor(int a){
    vector<int> factors;
    int num = a;
    while (num % 2 == 0) {
        factors.push_back(2);
        num /= 2;
    }
    for (int i = 3; (long long)i * i <= num; i += 2) {
        while (num % i == 0) {
            factors.push_back(i);
            num /= i;
        }
    }
    if (num > 1) factors.push_back(num);
    return factors;
}

int main(){
    int a = 160;
    auto factors = primeFactor(a);
    for (size_t i = 0; i < factors.size(); ++i) {
        if (i) cout << " ";
        cout << factors[i];
    }
    cout << endl;
    return 0;
}
