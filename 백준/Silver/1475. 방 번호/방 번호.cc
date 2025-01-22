#include <bits/stdc++.h>;
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int num[10] = {};
	long long N, t;
	cin >> N;
	while (N) {
		t = N % 10;
		N /= 10;
		num[t]++;
	}
	if ((num[6] + num[9]) % 2)num[6]++;
	num[6] = (num[6] + num[9]) / 2;
	num[9] = num[6];
	cout << *max_element(num, num + 10);
	return 0;
}