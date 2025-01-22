#include <bits/stdc++.h>
using namespace std;

void hanoi(int a, int b, int N) {
	if (N == 1) {
		cout << a << ' ' << b << '\n';
		return;
	}
	hanoi(a, 6 - a - b, N - 1);
	cout << a << ' ' << b << '\n';
	hanoi(6 - a - b, b, N - 1);
}


int main() {
	ios::sync_with_stdio;
	cin.tie(0);
	int num = 0;
	cin >> num;
	cout << (1 << num) - 1 << '\n';
	hanoi(1, 3, num);
	return 0;
}