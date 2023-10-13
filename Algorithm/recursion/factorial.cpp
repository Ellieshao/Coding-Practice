#include <iostream>
using namespace std;

int factorial(int x) {
    cout << "in: " << x << endl;
    if(x == 0) {
        cout << "out: " << x << endl;
        return 1;
    } else {
        int x = factorial(x-1) * x;
        cout << "out: " << x << endl;    // 放在呼叫factorial(n-1)之後方便觀察。
        return x;
    }
}

int main() {
    cout << factorial(5) << endl;
}