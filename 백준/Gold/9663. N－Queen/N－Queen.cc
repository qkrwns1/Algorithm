#include <bits/stdc++.h>
using namespace std;

int N, M;
int arr[10];
bool isused[3][40];
int cnt = 0;

void func(int num) {
    if (num == N) {
        cnt++;
        return;
    }
    for (int i = 0; i < N; i++) {
        if (isused[0][i] || isused[1][i + num] || isused[2][num - i + N - 1])continue;
        isused[0][i] = 1;
        isused[1][i + num] = 1;
        isused[2][num - i + N - 1] = 1;
        func(num + 1);
        isused[0][i] = 0;
        isused[1][i + num] = 0;
        isused[2][num - i + N - 1] = 0;
    }
}

int main() { 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    func(0);
    cout << cnt;
    return 0;
}