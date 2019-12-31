#include <bits/stdc++.h>
using namespace std;

const long long N = 600851475143;

long long findMaxPrimeFactor(long long n) {
    vector<long long> factors;
    int d = 2;
    while(n > 1) {
        while(n % d == 0) {
            factors.push_back(d);
            n /= d;
        }
        d += 1;
        if(d * d > n) { 
            if(n > 1) { factors.push_back(n); }
            break;
        }
    }
    return *max_element(factors.begin(), factors.end());
}

int main(void) {
    cout << findMaxPrimeFactor(N) << endl;
    return 0;
}