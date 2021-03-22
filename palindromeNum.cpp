#include<iostream>
#include<limits.h>

using std::cout;
using std::cin;
using std::endl;

bool isPal(int n) {
    int rev = 0;
    int temp = n;

    while (temp != 0) 
    {
        int lastD = temp % 10;
        rev = rev * 10 + lastD;
        temp = temp/10;
    }
    
    return (rev == n);
}

int main() {

    int n;
    bool pal = false;
    
    cin >> n;
    
    pal = isPal(n);

 
    cout << pal << endl;

    return 0;
}