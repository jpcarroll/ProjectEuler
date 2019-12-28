#include <bits/stdc++.h>
using namespace std;

int find3or5(int n) {
   int sum = 0;
   for(int i = 0; i < n; i++) {
       sum += (i % 5 == 0 || i % 3 == 0) ? i : 0;
   }
   return sum; 
}

int main(void) {

    int n = 1000;

    cout << find3or5(n) << endl;

    return 0;
}