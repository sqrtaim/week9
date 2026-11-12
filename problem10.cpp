#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int row = 1; row <= n; row++) {
     for (int c = row -1 ; c >= 0; c--) {
        cout << (char)('A'+ c);
        
     }
      cout << endl;  
}
 return 0;
}