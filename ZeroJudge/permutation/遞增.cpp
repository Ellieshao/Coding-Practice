#include <iostream>
using namespace std;

int m, n, a[10];

void permutation(int index) {
    if (index == n) {
        for (int i; i < n; i++) {
            cout << a[i];
        }
    }
    for (int i = 0; i < m; i++) {
        a[index] == i;
        permutation(index + 1);
    }
}

int main() {
    cin >> m >> n;
    permutation(0);
}