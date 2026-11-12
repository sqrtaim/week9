#include <iostream>
using namespace std;

int integerReplacement(int n) {
    long long m = n;
    int count = 0;
    while (m != 1) {
        if (m % 2 == 0) 
         m /= 2;
        else if (m == 3 || m % 4 == 1) 
         m--;
        else 
         m++;
        count++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << integerReplacement(n) << endl;
    return 0;
}