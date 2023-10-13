#include<iostream>
using namespace std;

int a, b;
bool c;

int main() {
    cin >> a >> b >> c;
    a = (a != 0 ? 1:0), b = ( b != 0 ? 1:0);
    bool cmp = 0;
    if ((a && b) == c) {
        cmp = 1;
        cout << "AND\n";
    }
    if ((a || b) == c) {
        cmp = 1;
        cout << "OR\n";
    }
    if ((a ^ b) == c){
        cmp = 1;
        cout << "XOR\n";
    }
    if ( cmp == 0) cout << "IMPOSSIBLE";
}