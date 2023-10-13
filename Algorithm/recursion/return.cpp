#include <iostream>
using namespace std;

string toString(int n) {
    string s = "";
    while(n) {
        s += n % 10 + '0';
        n /= 10;
    }
    reverse(s.begin(), s.end());
    return s;
}

int main()
{
    int x = 105;
    int y = 231;
    string sx = toString(x);
    string sy = toString(y);
    cout << sx << sy << endl;
}