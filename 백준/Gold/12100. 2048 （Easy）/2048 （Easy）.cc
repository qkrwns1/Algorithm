#include <bits/stdc++.h>
using namespace std;
int N;
int num1[22][22];
int num2[22][22];
int mx = 0;

void rotate() {
    int tmp[22][22] = { 0 };
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            tmp[i][j] = num2[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            num2[i][j] = tmp[N - j - 1][i];
        }
    }
}

void func1(int dir) {
    while (dir--)rotate();
    for (int i = 0; i < N; i++) {
        int tmp[22] = {};
        int idx = 0;
        for (int j = 0; j < N; j++) {
            if (num2[i][j] == 0)continue;
            else if (tmp[idx] == 0) {
                tmp[idx] = num2[i][j];
            }
            else if (tmp[idx] == num2[i][j]) {
                tmp[idx++] *= 2;
            }
            else {
                tmp[++idx] = num2[i][j];
            }
        }
        swap(tmp, num2[i]);
    }
}




int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> num1[i][j];
        }
    }
    for (int t = 0; t < 1024; t++) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                num2[i][j] = num1[i][j];
            }
        }
        int tmp = t;
        for (int i = 0; i < 5; i++) {
            func1(tmp % 4);
            tmp /= 4;
        }
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                mx = max(mx, num2[i][j]); 
            }
        }
    }
    cout << mx;
    return 0;
}