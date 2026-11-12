#include <iostream>
using namespace std;


    bool isPalindrome(int n) {
    int reflected = n;
    int d = 0;
    while (reflected > 0) {
        d = d * 10 + reflected % 10;
        reflected /= 10;
        }
    
    return d == n;
}
    
int main() {
    int n;
    long long sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
    if (isPalindrome(i)) 
    sum += i;
    }
    cout << sum << endl;
    return 0;
    
    
    

    
}