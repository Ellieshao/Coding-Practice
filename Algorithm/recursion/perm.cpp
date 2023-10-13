// int main()
// {
//     int a[10];
//     for(int i0 = 0; i0 <= 1; i0++) {
//         a[0] = i0;
//         for(int i1 = 0; i1 <= 1; i1++) {
//             a[1] = i1;
//             for(int i2 = 0; i2 <= 1; i2++) {
//                 a[2] = i2;
//                 for(int i = 0; i < 3; i++) {
//                     cout << a[i] << ' ';
//                 }
//                 cout << endl;
//             }
//         }
//     }
// }

#include<iostream>

using namespace std;
int a[10], n, m;

void permutation(int index) {
    if(index == n) {
        for(int i = 0; i < n; i++) {
            cout << a[i] << ' ';
        }
        cout << endl;
        return;
    }
    for(int i = 0; i <= m; i++) {
        a[index] = i;
        permutation(index+1);
    }
}

signed main() {
    cin >> n >> m;
    permutation(0);
}