#include <bits/stdc++.h>
using namespace std;

void fuc(int x, int y, int N) {
	if ((x / N) % 3 == 1 && (y / N) % 3 == 1)cout << ' ';
	else if (N / 3 == 0)cout << '*';
	else {
		fuc(x, y, N / 3);
		return;
	}
}


int main() {
	ios::sync_with_stdio;
	cin.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			fuc(i, j, N);
		}
		cout << '\n';
	}
	return 0;
}