#include <iostream>
#include <vector>
using namespace std;

vector<int> G[805];
vector<int> visit(805, 0);

void dfs(int x) {
    visit[x] == true;
    for(int i = 0 ; i < G[x].size(); i++) {
        for(int j = 0; )
            if(visit(j) == false) {
                dfs()
        }
    }
}


int main() {
    int N, M;
    cin >> N >> M;
    for(int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
    }
    dfs(0);
}