#include <bits/stdc++.h>
using namespace std;

int N, M, H;
bool L[31][11]; 
int num = 4;

bool check() {
    for (int i = 1; i <= N; i++) {
        int x = i;
        for (int k = 1; k <= H; k++) {
            if (L[k][x]) x++;            
            else if (x > 1 && L[k][x - 1]) x--; 
        }
        if (x != i) return false;
    }
    return true;
}

void func(int num1, int num2) {
    if (num2 >= num) return;
    if (check()) {
        num = min(num, num2);
        if (num == 0) {
            cout << num;
            exit(0);
        }
    }
    for (int i = num1; i <= H; i++) {
        for (int j = 1; j < N; j++) {
            if (L[i][j] || L[i][j - 1] || L[i][j + 1]) continue; 
            L[i][j] = true;
            func(i, num2 + 1);
            L[i][j] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> H;
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        L[a][b] = true;
    }
    func(1, 0);
    if (num > 3) cout << "-1";
    else cout << num;
    return 0;
}
