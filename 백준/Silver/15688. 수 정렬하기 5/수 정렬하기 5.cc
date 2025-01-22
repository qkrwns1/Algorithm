#include<bits/stdc++.h>
using namespace std;

int N;
int num[2000001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		num[a + 1000000]++;
	}
	for (int i = 0; i <= 2000000; i++) {
		while (num[i]--) {
			cout << i - 1000000 << "\n";
		}
	}
}