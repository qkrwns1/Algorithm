#include <bits/stdc++.h>
using namespace std;

int N, M, K;
int R, C;
int S[12][12];
int note[42][42];

bool func1(int x, int y) {
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (note[x + i][y + j] == 1 && S[i][j] == 1)return false;
        }
    }
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (S[i][j] == 1)note[x + i][y + j] = 1;
        }
    }
    return true;
}

void rotate() {
    int S_sup[12][12] = { 0 };
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            S_sup[i][j] = S[i][j];
        }
    }
    for (int i = 0; i < C; i++) {
        for (int j = 0; j < R; j++) {
            S[i][j] = S_sup[R - j - 1][i];
        }
    }
    swap(R, C);
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    cin >> N >> M >> K;
    while (K--) {
        cin >> R >> C;
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                cin >> S[i][j];
            }
        }
        for (int rot = 0; rot < 4; rot++) {
            bool T = false;
            for (int i = 0; i <= N - R; i++) {
                for (int j = 0; j <= M - C; j++) {
                    T = func1(i, j);
                    if (T)break;
                }
                if (T)break;
            }
            if (T)break;
            else {
                rotate();
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (note[i][j]) {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}