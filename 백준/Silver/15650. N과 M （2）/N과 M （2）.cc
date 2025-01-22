#include <bits/stdc++.h>
using namespace std;

int N, M;
int arr[10];
bool num[10];

void func(int k) {
    if (k == M) {
        for (int i = 0; i < k; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        
    }
    for (int i = 1; i <= N; i++) {
        if (!num[i] && (k == 0 || arr[k - 1] < i)) {
            arr[k] = i;
            num[i] = true;
            func(k + 1);
            num[i] = false;
        }
    }
}

int main() { 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    func(0);
    return 0;
}