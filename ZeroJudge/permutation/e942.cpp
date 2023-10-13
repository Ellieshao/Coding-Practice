#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int N, num[10];
vector<int> v, used;

void permutation(int index) {
    if (index == N) {
        for(int x : v) cout << x << " ";
        cout << endl;
        return;        

    }
    for(int i = 0; i < N; i++) if(used[i] == false) {
        used[i] = true;
        v.push_back(num[i]);
        permutation(index + 1);
        v.pop_back();
        used[i] = false;
    }
}

signed main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }
    sort(num, num + N);
    used.assign(N, 0);
    permutation(0);
}