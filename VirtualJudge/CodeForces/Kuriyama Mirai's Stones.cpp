#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, type, l, r;
    long long a[100001]{}, sum[100001]{}, sorted_sum[100001]{};
    
    cin >> n;
    for (int i = 0 ; i < n ; i++) { 
        cin >> a[i];
        sum[i+1] = a[i] + sum[i];
    }
    
    sort(a, a+n);
    for (int i = 0 ; i < n ; i++) {
        sorted_sum[i+1] = a[i] + sorted_sum[i];
    }
    
    cin >> m;
    for (int i = 0 ; i < m ; i++) {
        cin >> type;
        cin >> l >> r;
        if (type == 1) {
            cout << sum[r] - sum[l-1] << endl;
        }
        if (type == 2) {
            cout << sorted_sum[r] - sorted_sum[l-1] << endl;
        }
    }
}