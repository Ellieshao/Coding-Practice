#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    int triangle[3];
    for (int i = 0 ; i < 3 ; i++) {
        cin >> triangle[i];
    }
    sort(triangle, triangle+3);
    for(int i = 0 ; i < 3 ; i++) {
        cout << triangle[i] << " ";
    }
    cout << endl;
    if (triangle[0] + triangle[1] <= triangle[2]) {
        cout << "No" << endl;
    } else if (pow(triangle[0], 2) + pow(triangle[1], 2) < pow(triangle[2], 2)) {
        cout << "Obtuse" << endl;
    } else if (pow(triangle[0], 2) + pow(triangle[1], 2) == pow(triangle[2], 2)) {
        cout << "Right" << endl;
    } else {
        cout << "Acute" << endl;
    }
}