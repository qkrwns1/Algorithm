#include<bits/stdc++.h>
using namespace std;

int N,M;
int num[12];
int cnt = 0;



int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> M;
		num[1] = 1;
		num[2] = 2;
		num[3] = 4;
		for (int j = 4; j <= M; j++) {
			num[j] = num[j - 1] + num[j - 2] + num[j - 3];
		}
		cout << num[M] << "\n";
	}
	return 0;
}