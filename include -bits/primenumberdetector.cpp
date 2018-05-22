#include <bits/stdc++.h>

using namespace std;

int main() {
    int number, j;
    bool prime;
    cin >> number;
    
    for(j = 2; j < number; j++) {
        if (number%j == 0) {
            prime = false;
            break;
        }
    }
    
    if (prime == 1) {
        cout << "Prime";
    } else {
        cout << "Not Prime";
    }
    
    return 0;
}
