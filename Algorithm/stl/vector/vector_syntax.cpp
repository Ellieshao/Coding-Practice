#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v; // 宣告
vector<int> v1 = {2, 5};
vector<int> v2(5); // 五個預定值 {0, 0, 0, 0, 0}
vector<int> v3(5, 20); // 五個20 {20, 20, 20, 20, 20}
vector<int> v4(v3); // v4 = v3

int main () {
    // 宣告後就可以當array去用了
    cout << v1[0] << endl; // 取值 O(1) output: 20

    // array沒有的功能
    v1.push_back(4); // 在陣列後方加4 變成{2, 3, 4}
    cout << v1.size() << endl; // vector大小（存多少東西） output: 3

    sort(v1.begin(), v1.end()); // 和array的sort比較一下 sort(a, a+5)
    // v.begin()很像位址，但又不是。

    reverse(v1.begin(), v1.end()); // v1 = {5, 4, 2}

    // 有但幾乎用不到的語法
    v1.insert(v1.begin(), 3); // 在最前面新增數字3 v1 = {3, 5, 4, 2}
    v1.erase(v1.begin()+2); // 刪除index2的元素 v1 = {3,  5, 2}
}