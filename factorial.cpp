#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int fac(int n) {
    if(n==0) {
        return 1;
    }
    return n * (fac(n-1));
} 

int main() {

    int n; 

    cin >> n;

    int fact = fac(n);

    cout << "Factorial is: " << fact << endl;

    return 0;
}