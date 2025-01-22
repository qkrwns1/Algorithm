#include <bits/stdc++.h>
using namespace std;


int N, M;
int X[10][10];
vector<pair<int, int>> Z;
int col[10], row[10], sq[10];


bool func(int x, int y, int num) {
    for (int i = 0; i < 9; i++) {
        if (X[i][y] == num || X[x][i] == num)return false;
    }
    x /= 3; y /= 3;
    x *= 3; y *= 3;
    for (int i = x; i < x + 3; i++) {
        for (int j = y; j < y + 3; j++) {
            if (X[i][j] == num)return false;
        }
    }
    return true;
}

void sol(int num) {
    if (num == Z.size()) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                cout << X[i][j] << ' ';
            }
            cout << '\n';
        }
        exit(0);
    }
    else {
        for (int i = 1; i <= 9; i++) {
            if (func(Z[num].first, Z[num].second, i)) {
                X[Z[num].first][Z[num].second] = i;
                sol(num + 1);
                X[Z[num].first][Z[num].second] = 0;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> X[i][j];
            if (X[i][j] == 0)Z.push_back({ i,j });
        }
    }
    sol(0);
    return 0;
}