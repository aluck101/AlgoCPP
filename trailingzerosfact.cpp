#include<iostream>

using std::cout;
using std::cin;
using std::endl;

//To count trailing zeros on the integer n
int trailzeros(int n) {
    int zeros = 0;

    for (int i = 5; i <= n; i = i*5) {
        zeros = zeros + n/i;
    }

    return zeros;
}

int main() {
    int n = 0;

    cin >> n;

    cout << (int)trailzeros(n) << endl;

    return 0;
}