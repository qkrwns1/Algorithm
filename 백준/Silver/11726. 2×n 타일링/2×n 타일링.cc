#include<bits/stdc++.h>
using namespace std;

int N;
int num[10002];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	num[1] = 1;
	num[2] = 2;
	for (int i = 3; i <= N; i++) {
		num[i] = num[i - 1] + num[i - 2];
		num[i] %= 10007;
	}
	cout << num[N];
	return 0;
}