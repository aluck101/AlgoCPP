#include<iostream>

using std::cout;
using std::cin;
using std::endl;


//Sum of first n natural numbers
int numSum(int n) {
    return n*((n+1)/2);
}

int main() {
    int n = 0;

    cin >> n;

    cout << (int)numSum(n) << endl;

    return 0;
}