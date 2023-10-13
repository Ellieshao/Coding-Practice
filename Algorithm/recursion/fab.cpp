#include <iostream>
using namespace std;
// 1 1 2 3 5 8 13 21

int fab(int x) {
	cout << "in: " << x << endl;
	int res;
	if(x <= 1) res = 1;
	else res = fab(x-1) + fab(x-2);
	cout << "out: " << x << endl;
	return res; 
}

int main() {
    cout << fab(3) << endl;
}