#include <bits/stdc++.h>
using namespace std;

int MAX = 4000000;
int sum = 0;

int fibonacci(int n) {
    double phi = (1 + sqrt(5)) / 2; 
    return round(pow(phi, n) / sqrt(5)); 
}

void findEvenFib(int n) {
    if(fibonacci(n) >= MAX) { return; }
    sum += (!(fibonacci(n) & 1)) ? fibonacci(n) : 0;
    findEvenFib(n + 1); 
}

int main(void) {
    findEvenFib(sum);
    cout << sum << endl;
    return 0;
}