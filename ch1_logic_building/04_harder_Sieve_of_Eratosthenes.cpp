#include<iostream>
#include<vector>
using namespace std;

vector<bool> sieve(int n) {
    vector<bool> isPrime(n + 1, true);
    if (n >= 0) isPrime[0] = false;
    if (n >= 1) isPrime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }
    return isPrime;
}

int main(){
    int a;
    if (!(cin >> a)) return 0;
    if (a < 2) {
        cout << "No primes <= " << a << endl;
        return 0;
    }

    vector<bool> res = sieve(a);
    bool first = true;
    for (int i = 2; i <= a; ++i) {
        if (res[i]) {
            if (!first) cout << " ";
            cout << i;
            first = false;
        }
    }
    cout << endl;
    return 0;
}