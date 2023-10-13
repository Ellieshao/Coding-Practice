#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n, student[20], a, b, sign_a = 0, sign_b = 0;
    cin >> n;
    for (int i = 0 ; i < n ; i++) {
        cin >> student[i];
    }
    sort(student, student+n);
    for (int i = 0 ; i < n ; i++) {
        cout << student[i] << " ";
    }
    cout << endl;
    for (int i = n-1 ; i >= 0 ; i--) {
        if (student[i] < 60) {
            sign_a = 1;
            cout << student[i] << endl;
            break;
        }
    }
    if (sign_a == 0) {
        cout << "best case" << endl;
    }
    for (int i = 0 ; i < n ; i++) {
        if (student[i] >= 60) {
            sign_b = 1;
            cout << student[i] << endl;
            break;
        } 
    }
    if (sign_b == 0) {
        cout << "worst case" << endl;
    }
}