#include <iostream>
using namespace std;

int main() {
    long long n;
    long long product;
    product = 1;
    int maxDigit = 0;
    cin >> n;
    while (n > 0) {
        int digit = n % 10;
        if (digit != 0) 
        product = product * digit;
        if (digit > maxDigit) maxDigit = digit; //why i cant use else if here, 
                        //with else if, the output is 28 0, for input 4071, while it should be 28 7
        n /= 10;
    }
    cout << product << " " << maxDigit << endl;
    return 0;
}