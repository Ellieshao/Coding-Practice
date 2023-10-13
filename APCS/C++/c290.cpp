#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int main()
{
    string x;
    int a = 0, b = 0;
    cin >> x;
    for (int i = 0 ; i < x.size() ; i++) {
        if (i % 2 == 0) {
            b += x[i] - '0';
        } else {
            a += x[i] - '0';
        }
    }
    cout << abs(a - b) << endl;
}