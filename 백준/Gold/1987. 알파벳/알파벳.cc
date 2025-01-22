#include <bits/stdc++.h>
using namespace std;


int N, M;
char X[22][22];
int AB[30];
int max_dis;

void func(int x, int y, int dis) {
    int c = X[x][y] - 'A';
    if (AB[c] == 1 || x >= N || y >= M || x < 0 || y < 0)return;
    AB[c] = 1;
    if (dis > max_dis) {
        max_dis = dis;
    }
    func(x + 1, y, dis + 1);
    func(x - 1, y, dis + 1);
    func(x, y + 1, dis + 1);
    func(x, y - 1, dis + 1);
    AB[c] = 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> X[i][j];
        }
    }
    func(0, 0, 1);
    cout << max_dis;
    return 0;
}