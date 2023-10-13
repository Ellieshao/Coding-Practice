#include<iostream>

using namespace std;
int a[10], N, used[10];

void permutation(int index) {
    if(index == N) {
        for(int i = 0; i < N; i++) {
            printf("%d", a[i]);
        }
        cout << endl;
        return;
    }
    for(int i = 1; i <= N; i++) {
        if(used[i] == false) {
            used[i] = true;
            a[index] = i;
            permutation(index+1);
            used[i] = false;
        }
    }
}
signed main() {
    scanf("%d", &N);
    permutation(0);
}